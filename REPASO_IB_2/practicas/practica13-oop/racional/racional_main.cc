/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file racional_main.cc
 * @author Steven
 * @date 2025-04-11
 * @brief Programa Cliente
 * @bug There are no known bugs
 */

#include "racional.h"
#include <fstream>

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  
  std::ifstream archivo_entrada{argv[1], std::ios::in};
  std::ofstream archivo_salida{argv[2], std::ios::app}; 
  if(!archivo_entrada.is_open() && !archivo_salida.is_open()) {
    std::cerr << "Los archivos no se han abierto correctamente " << std::endl;
    return -1;
  }

  int num_1, den_1, num_2, den_2;

  archivo_entrada >> num_1 >> den_1;
  archivo_entrada >> num_2 >> den_2;

  Rational first(num_1, den_1);
  Rational second(num_2, den_2);

  archivo_salida << "Suma: " << first + second << std::endl;
  archivo_salida << "Resta: " << first - second << std::endl;
  archivo_salida << "Multiplicación: " << first * second << std::endl;
  archivo_salida << "División: " << first / second << std::endl;
  archivo_salida << "Es mayor " << first << " que " << second << " ?";
  if((first > second) == 0) {
     archivo_salida << " Si lo es" << std::endl;
  } else {
    archivo_salida << " No lo es " << std::endl; 
  }

  archivo_entrada.close();
  archivo_salida.close();
}