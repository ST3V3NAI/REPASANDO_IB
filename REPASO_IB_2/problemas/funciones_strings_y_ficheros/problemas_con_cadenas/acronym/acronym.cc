/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file acronym.cc
 * @author Steven
 * @date 2025-04-15
 * @brief Definición de la función Usage y Acronym
 * @bug There are no known bugs
 */

#include "acronym.h"
#include <string>
#include <iostream>

void Usage(int argc, char* argv[]) {
  if(argc != 5) {
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

void Acronym(std::string& str) {
  std::getline(std::cin, str, '.');
  for(char i : str) {
    if(std::isupper(i)) {
      std::cout << i;
    }
  }
}

