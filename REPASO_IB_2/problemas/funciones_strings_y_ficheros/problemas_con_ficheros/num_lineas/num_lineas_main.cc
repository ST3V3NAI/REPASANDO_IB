/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file num_lineas_main.cc
 * @author Steven
 * @date 2025-04-21
 * @brief Programa que enumera lienas de texto
 * @bug There are no known bugs
 */

#include "num_lineas.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::ifstream fichero_1{argv[1], std::ios::app};
  std::ofstream fichero_2{argv[2], std::ios::in};

  EnumerateLines(fichero_1, fichero_2);
}