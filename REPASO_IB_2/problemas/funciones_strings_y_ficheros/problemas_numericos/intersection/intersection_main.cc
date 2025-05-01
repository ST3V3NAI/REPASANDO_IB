/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file intersection_main.cc
 * @author Steven
 * @date 2025-04-19
 * @brief Programa que calcula la intersección de dos intervaos
 * @bug There are no known bugs
 */

#include "intersection.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int numero_a = std::atoi(argv[1]);
  int numero_a2 = std::atoi(argv[2]);
  int numero_b = std::atoi(argv[3]);
  int numero_b2 = std::atoi(argv[4]);

  Intersection(numero_a, numero_a2, numero_b, numero_b2);
}