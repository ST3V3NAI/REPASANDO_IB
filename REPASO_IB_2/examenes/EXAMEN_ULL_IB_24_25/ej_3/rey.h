/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file rey.h
 * @author Steven
 * @date 2025-04-26
 * @brief Declaración de la función Usage y la clase Rey
 * @bug There are no known bugs
 */

#ifndef REY_H // Si no está definido rey.h
#define REY_H // Definimos rey.h

#include <iostream>

void Usage(int argc, char* argv[]);

class Rey {
  public: 
  // Constructor por defecto
  Rey() : name_{" "}, year_of_start_{0}, year_of_end_{0} {}
  // Constructor parametrizado
  Rey(const std::string& name, int year_of_start, int year_of_end) : 
      name_{name}, year_of_start_{year_of_start}, year_of_end_{year_of_end_} {}

  // Destructor
  ~Rey() {}

  // Setters
  void setName(const std::string& name) { name_ = name; }
  void setYearOfStart(int year_of_start) { year_of_start_ = year_of_start; }
  void setYearOfEnd(int year_of_end) { year_of_end_ = year_of_end; }

  // Getters
  std::string getName() const { return name_; }
  int getYearOfStart() const { return year_of_start_; }
  int getYearOfEnd() const { return year_of_end_; }

  // Métodos de la clase
  int howManyYears() const; 

  // Sobrecarga de operadores
  bool operator<(const Rey& other) const;

  friend std::ostream& operator<<(std::ostream& out, const Rey& other);
  friend std::istream& operator>>(std::istream& in, Rey& other);


  private: 
  // Atributos
    std::string name_;
    int year_of_start_, year_of_end_;
}; 





#endif // REY_H