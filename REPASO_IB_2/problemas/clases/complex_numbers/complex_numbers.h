/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file complex_numbers.h
 * @author Steven
 * @date 2025-04-23
 * @brief Declaración de Usage y la clase Complex
 * @bug There are no known bugs
 */

#ifndef COMPLEX_NUMBERS
#define COMPLEX_NUMBERS

#include <iostream>


void Usage(int argc, char* argv[]);

class Complex {
  public:
    Complex(const double r, const double i) : r_{r}, i_{i} {}
    ~Complex() {}

    void setReal(double r) { r_ = r; }
    void setImaginary(double i) { i_ = i; }
    double getReal() const { return r_; }
    double getImaginary() const { return i_; }

    void showNumber() const; 

    friend const std::ostream& operator<<(std::ostream& os, const Complex& other_);
    Complex operator+(const Complex& other_) const;
    Complex operator-(const Complex& other_) const;
    Complex operator*(const Complex& other_) const;
    

  private: 
    double r_, i_;
}; 

#endif // COMPLEX_NUMBERS