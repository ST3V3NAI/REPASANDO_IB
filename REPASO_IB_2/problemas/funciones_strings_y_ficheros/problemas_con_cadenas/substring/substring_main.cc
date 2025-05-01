/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file substring_main.cc
 * @author Steven
 * @date 2025-04-15
 * @brief Programa que muestra por pantalla la intersección de una palabra
 * @bug There are no known bugs
 */

#include "substring.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string str = argv[1];
  size_t pos = std::atoi(argv[2]);
  size_t len = std::atoi(argv[3]);

  std::cout << substr(str, pos, len);

}