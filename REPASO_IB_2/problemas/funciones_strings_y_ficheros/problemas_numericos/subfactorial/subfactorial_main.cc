/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file subfactorial_main.cc
 * @author Steven
 * @date 2025-04-20
 * @brief Programa que calcula el subfactorial de un arreglo
 * @bug There are no known bugs
 */

#include "subfactorial.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int number = std::atoi(argv[1]);
  
  std::cout << CalculateSubfactorial(number);
}