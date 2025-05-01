/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file factorial.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que realiza el factorial
 * @bug There are no known bugs
 */

#include <iostream>
#include <cmath>

int Factorial(int number);

int main() {
  int number; 

  std::cout << "Introduzca numero: ";
  std::cin >> number;

  std::cout << "Su factorial es: " << Factorial(number);
}

int Factorial(int number) {
  if(number == 0) return 1;
  else return (number * Factorial(number - 1));
}