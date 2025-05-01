/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file infinite_func.cc
 * @author Steven
 * @date 2025-04-17
 * @brief Definición de las Usage, Coseno, Factorial reciproco, Signo y SenoAprox y CosenoAprox
 * @bug There are no known bugs
 */

#include "infinite_func.h"

void Usage(int argc, char* argv[]) {
  if(argc != 4) {
    std::cerr << "This program is not working due and incorrect use of the params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program needs to follow this estructure to work: <./executable> <n> <x> <m>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

double FactorialReciproco(int n) {
  if(n == 0) return 1.0; 
  else return ((1.0/n) * FactorialReciproco(n - 1));
}


double Signo(int n) {
  return (n % 2 == 0) ? 1 : -1;
}


double SenoAprox(int x, int m) {
  double sum{0.0};
  for(int i = 0; i < m; ++i) {
    sum += Signo(i) * pow(x, 2 * i + 1) * FactorialReciproco(2 * i + 1);
  }
  return sum; 
}


double CosenoAprox(int x, int m) {
  double sum{0.0};
  for(int i = 0; i < m; ++i) {
    sum += Signo(i) * pow(x, 2 * i) * FactorialReciproco(2 * i);
  }
  return sum; 
}