/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file combination_main.cc
 * @author Steven
 * @date 2025-04-16
 * @brief Esriba un programa que haga la combinación de dos cadenas
 * @bug There are no known bugs
 */

#include "combination.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];
  std::string phrase2 = argv[2];

  std::cout << Combination(phrase, phrase2);
}