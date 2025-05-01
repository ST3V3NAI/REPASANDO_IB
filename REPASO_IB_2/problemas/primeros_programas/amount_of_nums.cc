/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file amount_of_nums.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que devuelve el número de dígitos
 * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>

int main() {
  int integer_number{0};

  std::cout << "Introduzca un número entero: ";
  std::cin >> integer_number;

  int amount_of_digits = log10(integer_number) + 1;

  std::cout << "El número de dígitos de " << integer_number << " es " << amount_of_digits;
}