/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file find_letter.cc
 * @author Steven
 * @date 2025-04-14
 * @brief Implementación de la función Usage y FindLetterAt
 * @bug There are no known bugs
*/

#include "find_letter.h"

void Usage(int argc, char* argv[]) {
  if(argc != 3) {
    std::cerr << "This program has been executed with the incorrect num of parameters" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program need to follow this structure to work: <./executable> <phrase> <letter_to_find>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void FindLetterAt(std::string& text, char letter) {
  for(size_t i = 0; i < text.length(); ++i) {
    if(text[i] == letter) {
      std::cout << i << std::endl;
      return;
    }
  }
  std::cout << -1 << std::endl;
}