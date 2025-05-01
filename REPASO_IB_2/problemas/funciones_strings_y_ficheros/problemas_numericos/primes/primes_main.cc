/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file primes_main.cc
 * @author Steven
 * @date 2025-04-19
 * @brief Programa que calcula la descomposición en factores 
 * primos de un número
 * @bug There are no known bugs
 */

#include "primes.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int number = std::atoi(argv[1]);

  Primes(number);
}