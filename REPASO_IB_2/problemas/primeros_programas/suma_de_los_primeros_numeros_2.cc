/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file suma_de_los_primeros_numeros_2.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que hace la ecuación de recurrencia
 * @bug There are no known bugs
 */

#include <iostream>

int Sumar(int n);

int main() {
  int number_a, suma;

  std::cout << "Introduzca un número: ";
  std::cin >> number_a;

  std::cout << "Suma: " << Sumar(number_a) << std::endl;
}

int Sumar(int n) {
  return (n * (n + 1) / 2);
}