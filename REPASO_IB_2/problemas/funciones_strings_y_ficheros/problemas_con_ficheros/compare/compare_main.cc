/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file compare_main.cc
 * @author Steven
 * @date 2025-04-22
 * @brief Programa que compara dos ficheros de texto y te dice en que linea 
 * son diferentes.
 * @bug There are no known bugs
 */

#include "compare.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::ifstream file_1{argv[1], std::ios::app};
  std::ifstream file_2{argv[2], std::ios::app};

  if(!file_1.is_open() || !file_2.is_open()) {
    std::cerr << "Ha habido un error abriendo uno de los dos ficheros" << std::endl;
    exit(EXIT_FAILURE);
  }

  ComparingTwoFiles(file_1, file_2);

  file_1.close();
  file_2.close();
}