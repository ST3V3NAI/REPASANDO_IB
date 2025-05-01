/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file algoritmo_de_euclides.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que calcula el maximo común divisor
 * @bug There are no known bugs
 */

#include <iostream>
#include <cmath>
#include <numeric>

int maximumCommonDivisor(int a, int b);

int main() {
  int number_a, number_b;

  std::cin >> number_a >> number_b; 

  std::cout << maximumCommonDivisor(number_a, number_b);

}

int maximumCommonDivisor(int a, int b) {
  if(a % b == 0) return b;
  else {
    int resto = a % b;
    int result = std::gcd(b , resto);
    return result;
  }
}