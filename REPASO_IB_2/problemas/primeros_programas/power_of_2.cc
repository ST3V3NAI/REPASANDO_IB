/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file power_of_2.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que te da todas las potencia de 2
 * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>

int main() {
  int number;
  int result{1};

  std::cout << "Introduzca un número: ";
  std::cin >> number;

  for(int i = 0; i <= number; i++) {
    result = pow(2, i);
    std::cout << result << " ";
  }
}