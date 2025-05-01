/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file power_main.cc
 * @author Steven
 * @date 2025-04-19
 * @brief Programa que realiza el "elevado" sin pow
 * @bug There are no known bugs
 */

#include "power.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  double base = std::atoi(argv[1]);
  int exp = std::atoi(argv[2]);

  std::cout << Power(base, exp);
}