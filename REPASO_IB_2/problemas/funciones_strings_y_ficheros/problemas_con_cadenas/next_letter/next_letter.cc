/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file next_letter.cc
 * @author Steven
 * @date 2025-04-14
 * @brief Implementación de las funciones
 * @bug There are no known bugs
*/

#include "next_letter.h"


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

void NextLetter(std::string& text) {
  for(char& i : text) {
    i += 1;
    std::cout << i; 
  }
}