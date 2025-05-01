/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file pitagorica.cc
 * @author Steven
 * @date 2025-04-17
 * @brief Definición de las funciones Usage y IsItAPitagoricTern
 * @bug There are no known bugs
 */

#include "pitagorica.h"

void Usage(int argc, char* argv[]) {
  if(argc != 4) {
    std::cerr << "This program is not working due to an incorrect use of the params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program will work if you follow tjis structure: <./executable> <num_a> <num_b> <num_c>"; 
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

bool IsItPitagoricTern(int num_a, int num_b, int num_c) {
  return ((num_a * num_a) + (num_b * num_b) == (num_c * num_c)); 
}









bool IsItPitagoricTern(int num_a, int num_b, int num_c);