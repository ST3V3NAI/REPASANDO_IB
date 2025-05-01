/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file intersection.cc
 * @author Steven
 * @date 2025-04-19
 * @brief Definción de las funciones Usage y las demás
 * @bug There are no known bugs
 */

#include "intersection.h"

void Usage(int argc, char* argv[]) {
  if(argc != 5) {
    std::cerr << "This program is not working due and incorrect use of the params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program needs to follow this estructure to work: <./executable> <a_1> <a_2> <b_1> <b_2>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}


void Intersection(int number_1, int number_2, int number_3, int number_4) {
      // Calcular los límites del intervalo de intersección
      int inicio = std::max(number_1, number_3);
      int fin = std::min(number_2, number_4);
  
      // Si hay intersección, mostrar el intervalo
      if (inicio <= fin) {
          std::cout << "Intersección: [" << inicio << ", " << fin << "]\n";
      } else {
          // Si no hay intersección, mostrar un mensaje
          std::cout << "No hay intersección\n";
      }
}