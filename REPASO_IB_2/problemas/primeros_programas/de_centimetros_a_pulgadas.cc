/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file de_centimetros_a_pulgadas.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que convierte de centímetros a pulgadas. 
 * @bug There are no known bugs
*/

#include <iostream>
#include <iomanip>

constexpr double P = 2.54;

int main() {
  int lenght{0};

  std::cout << "Introduzca longitud: ";
  std::cin >> lenght;

  double conversion = lenght / P; 

  std::cout << lenght << " cm = " << std::fixed << std::setprecision(2) << conversion << " in ";


}
