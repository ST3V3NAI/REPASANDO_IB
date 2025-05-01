/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file find_letter_main.cc
 * @author Steven
 * @date 2025-04-14
 * @brief Programa que localiza una letra en una palabra
 * @bug There are no known bugs
 */

#include "find_letter.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];
  char letter = argv[2][0];

  FindLetterAt(phrase, letter);
}