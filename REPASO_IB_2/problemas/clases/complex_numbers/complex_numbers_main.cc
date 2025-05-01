/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file complex_numbers_main.cc
 * @author Steven
 * @date 2025-04-23
 * @brief Programa que te muestra dos números complejos y diversas operaciones 
 * con ellos. 
 * @bug There are no known bugs
 */

#include "complex_numbers.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  Complex comp1{68.04, 0.00};
  Complex comp2{56.62, -21.21};

  std::cout << "Numeros: ";
  comp1.showNumber();
  comp2.showNumber();

  std::cout << std::endl;
  std::cout << "Suma: " << comp1 + comp2;
  std::cout << std::endl;
  std::cout << "Resta: " << comp1 - comp2;
  std::cout << std::endl;
  std::cout << "Mult.: " << comp1 * comp2; 
  

}