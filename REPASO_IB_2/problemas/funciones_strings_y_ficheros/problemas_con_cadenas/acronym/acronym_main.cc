/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file acronym_main.cc
 * @author Steven
 * @date 2025-04-15
 * @brief Programa que imprime el acrónimo
 * @bug There are no known bugs
 */

#include "acronym.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];

  Acronym(phrase);
}