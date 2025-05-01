/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file bin_coef_main.cc
 * @author Steven
 * @date 2025-04-19
 * @brief Programa que calcula el coeficiente binomial
 * @bug There are no known bugs
 */

#include "bin_coef.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int number_n = std::atoi(argv[1]);
  int number_k = std::atoi(argv[2]);

  std::cout << BinomialCoefficient(number_n, number_k);
}