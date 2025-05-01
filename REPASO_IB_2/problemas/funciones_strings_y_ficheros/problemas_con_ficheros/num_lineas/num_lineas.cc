/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file num_lineas.cc
 * @author Steven
 * @date 2025-04-21
 * @brief Definición de las funciones Usage y las demás
 * @bug There are no known bugs
 */

#include "num_lineas.h"

void Usage(int argc, char* argv[]) {
  if(argc != 3) {
    std::cerr << "This program has been executed with an incorrect params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information " << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "Try to follow this estructure: <./executable> <file.txt> <file_2.txt>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void EnumerateLines(std::ifstream& archivo, std::ostream& archivo2) {
  std::string new_line;
  int lines{1};
  while(std::getline(archivo, new_line)) {
    archivo2 << lines << ": " << new_line << std::endl;
    ++lines;
  }
}