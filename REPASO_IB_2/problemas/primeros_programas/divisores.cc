/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file divisores.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que te dice los divisores
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int number_a{0};

  std::cout << "Introduzca número: ";
  std::cin >> number_a;

  for(int i = 1; i <= number_a; ++i) {
    if(number_a % i == 0) {
      std::cout << i << " ";
    }
  }
}