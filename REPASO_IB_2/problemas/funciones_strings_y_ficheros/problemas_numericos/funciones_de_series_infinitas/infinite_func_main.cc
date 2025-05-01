/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file infinite_func_main.cc
 * @author Steven
 * @date 2025-04-18
 * @brief Programa que realiza las serie de taylor
 * @bug There are no known bugs
 */

#include "infinite_func.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int number = std::atoi(argv[1]);
  int number_x = std::atoi(argv[2]);
  int number_m = std::atoi(argv[3]);

  std::cout << "sen(" << number_x << ") = " << SenoAprox(number_x, number_m) << std::endl;
  std::cout << "cos(" << number_x << ") = " << CosenoAprox(number_x, number_m) << std::endl;

}