/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file leap_main.cc
 * @author Steven
 * @date 2025-04-18
 * @brief Programa que te dice si un año es bisiesto o no
 * @bug There are no known bugs
 */

#include "leap.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int year = std::atoi(argv[1]);
  
  if(LeapYear(year) == 0) {
    std::cout << year << " is not a leap year " << std::endl;
  } else {
    std::cout << year << " is a leap year " << std::endl;
  }

}