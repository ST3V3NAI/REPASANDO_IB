/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file power.cc
 * @author Steven
 * @date 2025-04-19
 * @brief Definición de las funciones Usage y las demás
 * @bug There are no known bugs
 */

#include "power.h"

void Usage(int argc, char* argv[]) {
  if(argc != 3) {
    std::cerr << "This program is not working due and incorrect use of the params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program needs to follow this estructure to work: <./executable> <base> <exp>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}


long double Power(double base, int exp){
  long double result{1.0};
/*    
    long double result = pow(base, exponente);
*/
  for (int i = 0; i < exp; ++i) {
    result *= base;
  }

    return result;
}
