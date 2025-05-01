/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file media.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que calcula la media de cuatro valores
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int first, second, third, fourth;
  double average;

  std::cout << "Primer valor: ";
  std::cin >> first;
  std::cout << "Segundo valor: ";
  std::cin >> second;
  std::cout << "Tercer valor: ";
  std::cin >> third;
  std::cout << "Cuarto valor: ";
  std::cin >> fourth;

  average = (first + second + third + fourth) / 4;

  std::cout << "El promedio es: " << average << std::endl;
}
