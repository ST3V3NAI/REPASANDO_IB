/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file input_string.cc
 * @author Steven
 * @date 2025-04-16
 * @brief Definición de la función Usage y las demás funciones
 * @bug There are no known bugs
*/

#include "input_string.h"

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

void OneMore(std::string& phrase) {
  for(char i : phrase) {
    i += 1; 
    std::cout << i;
  }
}


void OneLess(std::string& phrase) {
  for(char i : phrase) {
    i -= 1;
    std::cout << i;
  }
}


void AsciiRepresentation(std::string& phrase) {
  for(char i : phrase) {
    int ascii = i; 
    std::cout << ascii << " - ";
  }
}