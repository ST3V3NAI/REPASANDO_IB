/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file leap.cc
 * @author Steven
 * @date 2025-04-18
 * @brief Definición de las funciones Usage y LeapYear
 * @bug There are no known bugs
*/

#include "leap.h"

void Usage(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << "This program is not working due and incorrect use of the params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program needs to follow this estructure to work: <./executable> <year>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

bool LeapYear(int year) {
  return (year % 4 == 0) && (year >= 1800 && year <= 9999);
}
