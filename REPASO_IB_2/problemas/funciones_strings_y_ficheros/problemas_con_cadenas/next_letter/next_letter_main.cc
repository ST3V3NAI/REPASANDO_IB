/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file next_letter_main.cc
 * @author Steven
 * @date 2025-04-14
 * @brief Programa que dada una palabra, te la modifica mostrando las
 * siguientes letras de la palabra
 * @bug There are no known bugs
*/

#include "next_letter.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];

  NextLetter(phrase);
}