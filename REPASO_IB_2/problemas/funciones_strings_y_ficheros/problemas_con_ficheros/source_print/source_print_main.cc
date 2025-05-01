/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file source_print_main.cc
 * @author Steven
 * @date 2025-04-21
 * @brief Programa que te muestra por pantalla el código fuente
 * @bug There are no known bugs
 */

#include "source_print.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::ifstream file(argv[1], std::ios::app); 

  if(!file.is_open()) {
    std::cerr << "Error: file was not open correctly" << std::endl;
    return -1;
  }

  SourcePrint(file);

  file.close();




}