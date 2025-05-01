/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file min_max.cc
 * @author Steven
 * @date 2025-04-14
 * @brief Escriba un problema que dado un número natural, muestre
 * por pantalla su mayor y menor dígitos.
 * @bug There are no known bugs
*/

#include <iostream>
#include <vector>

void Usage(int argc, char* argv[]);

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int num = atoi(argv[1]);
  int minDigit = 9;
  int maxDigit = 0;

  while(num > 0) {
    int digit = num % 10;
    if(digit < minDigit) {
      minDigit = digit;
    } else if (digit > maxDigit) {
      maxDigit = digit;
    }
    num /= 10;
  }

  std::cout << "El dígito menor de " << argv[1] << " es " << minDigit << std::endl;
  std::cout << "El dígito mayor de " << argv[1] << " es " << maxDigit << std::endl;

  return 0;
}






void Usage(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << "This program has been executed with the incorrect parameters" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS); 
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program need: <./executable> <number> to work correctly\n";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

