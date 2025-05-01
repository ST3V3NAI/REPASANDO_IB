/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file hipotenusa.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que calcula el teorema de Pitágoras
 * @bug There are no known bugs
 */

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  int first_cathethus{0}, second_cathethus{0};

  std::cout << "Introduzca cateto a: ";
  std::cin >> first_cathethus;

  std::cout << "Introduzca cateto b: ";
  std::cin >> second_cathethus;

  double hypotenuse = sqrt(pow(first_cathethus, 2) + pow(second_cathethus, 2));
  std::cout << "El valor de la hipotenusa es " << std::fixed << std::setprecision(2) << hypotenuse;
}