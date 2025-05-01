/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file radio.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que cacula el perimetro y el area de un circulo
 * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  int radius{0};
  double perimeter{0.0}, area{0.0};

  std::cout << "Introduzca el radio: ";
  std::cin >> radius;

  perimeter = 2 * (M_PI * radius);
  area = (M_PI * (radius * radius)); 

  std::cout << "Perímetro: " << std::fixed << std::setprecision(1) << perimeter << std::endl;
  std::cout << "Área: " << std::fixed << std::setprecision(1) << area; 
}