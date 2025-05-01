/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file count_vowels.cc
 * @author Steven
 * @date 2025-04-14
 * @brief Implementación de las funciones Usage y CountVowels
 * @bug There are no known bugs
*/

#include "count_vowels.h"

void Usage(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << "This program has been executed with the incorrect num of parameters" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program need to follow this structure to work: <./executable> <phrase>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int CountVowels(const std::string& text) {
  int counter = 0;
  for(char i : text) {
    if(i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' ||
       i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
        ++counter;
       }
  }
  return counter;
}