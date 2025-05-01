/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file collatz.cc
 * @author Steven
 * @date 2025-04-13
 * @brief Programa que hace la secuencia de collatz
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int number; 

  std::cout << "n: ";
  std::cin >> number; 

  while(number != 1) {
    if(number % 2 == 0) {
      number = number / 2;
      std::cout << number << " ";
    } else if (number % 2 != 0) {
      number = (3 * number) + 1;
      std::cout << number << " ";
    }
  }
}
