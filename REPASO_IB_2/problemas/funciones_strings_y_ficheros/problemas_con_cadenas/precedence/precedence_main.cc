/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file precedence_main.cc
 * @author Steven
 * @date 2025-04-16
 * @brief Programa que te dice que cadena precede a la otra
 * @bug There are no known bugs
 */

#include "precedence.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];
  std::string phrase2 = argv[2];

  Precedence(phrase, phrase2);
}