/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file temperatures.cc
 * @author Steven
 * @date 2025-04-18
 * @brief Definición de Usage y las demás funciones
 * @bug There are no known bugs
**/

#include "temperatures.h"

void Usage(int argc, char* argv[]) {
  if(argc != 4) {
    std::cerr << "This program has been executed with the incorrect nums of params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This porgram need to follow this structure to work: <./.executable> <min_temp> <max_temp> <difference_temp>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}


double FarenheitToCelsius(int temperature) {
  return ((temperature - 32.0) * (5.00/9.00));
}

double FarenheitToAbsolute(int temperature) {
  return (FarenheitToCelsius(temperature) + 273.15);
}