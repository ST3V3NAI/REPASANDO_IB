/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file pitagorica_main.cc
 * @author Steven
 * @date 2025-04-17
 * @brief Programa que comprueba si tres números enteros positivos forman una
 * terna pitagorica
 * @bug There are no known bugs
 */

#include "pitagorica.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int number_a = std::atoi(argv[1]);
  int number_b = std::atoi(argv[2]);
  int number_c = std::atoi(argv[3]);


  if(IsItPitagoricTern(number_a, number_b, number_c) == 0) {
    std::cout << number_a << " " << number_b << " " << number_c << " es una terna pitagórica"; 
  } else if (IsItPitagoricTern(number_a, number_b, number_c) != 0) {
    std::cout << number_a << " " << number_b << " " << number_c << " no es una terna pitagórica"; 
  }
}