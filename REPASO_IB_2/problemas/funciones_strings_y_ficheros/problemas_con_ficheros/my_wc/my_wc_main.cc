/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file my_wc_main.cc
 * @author Steven
 * @date 2025-04-21
 * @brief Programa que te muestra las lineas, palabras y caracteres de un fichero
 * @bug There are no known bugs
 */

#include "my_wc.h"

int main(int argc, char* argv[]){
  Usage(argc, argv);

  std::ifstream archivo(argv[1], std::ios::app); 

  WordCount(archivo);
}