/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file precedence.cc
 * @author Steven
 * @date 2025-04-16
 * @brief Definición de la función Usage y Precedence
 * @bug There are no known bugs
 */

#include "precedence.h"

void Usage(int argc, char* argv[]) {
  if(argc != 3) {
    std::cerr << "This program has been executed with the incorrect num of parameters" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program need to follow this structure to work: <./executable> <phrase> <phrase2>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void Precedence(std::string& str1, std::string& str2) {
  if(str1 > str2) {
    std::cout << str1;
  } else {
    std::cout << str2;
  }
}