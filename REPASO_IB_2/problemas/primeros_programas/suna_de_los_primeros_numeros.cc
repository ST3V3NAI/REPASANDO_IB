/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file suna_de_los_primeros_numeros.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que suma los 5 primeros numeros
 * @bug There are no known bugs
 */

#include <iostream>

int main() {
  int number, result;

  std::cout << "Introduzca un número: ";
  std::cin >> number;

  for(int i = 0; i <= number; ++i) {
    result += i;
  }

  std::cout << result << std::endl;

  return 0;
}