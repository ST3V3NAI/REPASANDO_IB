/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file books.h
 * @author Steven
 * @date 2025-04-22
 * @brief Declaración de las funciones Usage y las demás
 * @bug There are no known bugs
 */

#ifndef BOOKS_H
#define BOOKS_H

#include <iostream>

void Usage(int argc, char* argv[]);

class Book {
  public: 
    // Constructor parametrizado
    Book(const std::string title, const int date_of_publication, const double price) : title_{title}, date_of_publication_{date_of_publication}, price_{price} {}
    // Destructor
    ~Book(void) {}

    // Getters y Setters
    void setTitle(std::string title) { title_ = title; }
    void setDate(int date_of_publication) { date_of_publication_ = date_of_publication; }
    void setPrice(double price) { price_ = price; }

    std::string getTitle() const { return title_; }
    int getDate() const { return date_of_publication_; }
    double getPrice() const { return price_; }

    // Metodos adicionales
    void showData() const; 

    double addTaxes(double taxes); 


  private: 
    std::string title_;
    int date_of_publication_; 
    double price_;
}; 



#endif // BOOKS_H