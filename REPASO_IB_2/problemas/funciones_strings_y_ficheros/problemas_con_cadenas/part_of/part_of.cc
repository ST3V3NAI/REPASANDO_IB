/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file part_of.cc
 * @author Steven
 * @date 2025-04-15
 * @brief Definición de la función Usage y PartOf
 * @bug There are no known bugs
 */

#include "part_of.h"
 
 void Usage(int argc, char* argv[]) {
  if(argc != 3) {
    std::cerr << "This program has been executed with the incorrect num of parameters" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program need to follow this structure to work: <./executable> <phrase> <phrase>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

bool PartOf(std::string& phrase, std::string internal_phrase) {
  size_t pos = phrase.find(internal_phrase);
  if(pos != std::string::npos) {
    return true;
  } else {
    return false;
  }
}