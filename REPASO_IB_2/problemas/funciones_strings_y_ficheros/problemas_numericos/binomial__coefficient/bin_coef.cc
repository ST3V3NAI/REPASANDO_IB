/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file bin_coef.cc
 * @author Steven
 * @date 2025-04-19
 * @brief Definción de las funciones Usage y las demás
 * @bug There are no known bugs
 */

#include "bin_coef.h"

void Usage(int argc, char* argv[]) {
  if(argc != 3) {
    std::cerr << "This program has been executed with an incorrect params";
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program will work if you follow this structure: <./executable> <number_n> <number_k>"; 
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int Factorial(int numero){
  int factorial{1};
  for(int i{2}; i <= numero; i++){
  factorial = factorial * i;
 }
  return factorial;
}

double BinomialCoefficient(int number_n, int number_k) {
  if (number_n < 0 || number_k < 0 || number_k > number_n) {
    std::cerr << "Valores no válidos para n o k.\n";
    return -1; // Indicar error
  }
  return Factorial(number_n) / (Factorial(number_k) * Factorial(number_n - number_k));
}