/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file del_blanc.cc
 * @author Steven
 * @date 2025-04-21
 * @brief Definición de las funciones Usage y las demás
 * @bug There are no known bugs
 */

#include "del_blanc.h"
#include <string>

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


void DeletingBlancLines(std::ifstream& archivo_1, std::ofstream& archivo_2) {
  std::string linea;
  while (std::getline(archivo_1, linea)) {
      if (linea.find_first_not_of(" \t\r\n") != std::string::npos) {
          archivo_2 << linea << std::endl;
      }
  }
}
