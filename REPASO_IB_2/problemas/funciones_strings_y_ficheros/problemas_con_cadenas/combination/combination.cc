/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file combination.cc
 * @author Steven
 * @date 2025-04-16
 * @brief Definición de las funciones Usage y Combination
 * @bug There are no known bugs
*/

#include "combination.h"

void Usage(int argc, char* argv[]) {
  if(argc != 3) {
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

std::string Combination(std::string& phrase, std::string& phrase2) {
  std::string result;
  size_t MinLenght = std::min(phrase.size(), phrase2.size());

  for(size_t i = 0; i < MinLenght; ++i) {
    result += phrase[i];
    result += phrase2[i];
  }
  return result;
}