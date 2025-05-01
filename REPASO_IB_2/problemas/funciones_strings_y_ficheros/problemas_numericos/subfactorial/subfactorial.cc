/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file subfactorial.cc
 * @author Steven
 * @date 2025-04-20
 * @brief Definición de la función Usage y las demás funciones
 * @bug There are no known bugs
 */


#include "subfactorial.h"

void Usage(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << "This program is not working due and incorrect use of the params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program needs to follow this estructure to work: <./executable> <n>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}


double Signo(int number) {
  return (number % 2 == 0) ? 1 : -1;
}


int Factorial(int number) {
  if(number == 0) return 1;
  else return number * Factorial(number - 1);
}


double CalculateSubfactorial(int number) {
  double result;
  for(int i = 0; i <= number; ++i) {
    result += Signo(i) * ((Factorial(number)) / Factorial(i));
  }

  return result;
}