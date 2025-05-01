/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file count_vowels_main.cc
 * @author Steven
 * @date 2025-04-14
 * @brief Programa que devuelve el número de vocales que se encuentran en 
 * una cadena de texto
 * @bug There are no known bugs
 */

#include "count_vowels.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];

  std::cout << CountVowels(phrase) << std::endl; 
}