/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file rey_main.cc
 * @author Steven
 * @date 2025-04-26
 * @brief Programa que lee una cantidad indeterminada de objetos tipo Rey
 * desde el flujo de entrada estándar y los introduce en un vector. 
 * @bug There are no known bugs
 */

#include "rey.h"
#include <vector>
#include <algorithm>

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::vector<Rey> reyes; 
  Rey rey; 

  while(std::cin >> rey) {
    reyes.emplace_back(rey);
  }

  std::sort(reyes.begin(), reyes.end());

  for(const Rey& r : reyes) {
    std::cout << r  << ' ' << r.howManyYears() << " years" << std::endl;
  }

  return 0; 
}