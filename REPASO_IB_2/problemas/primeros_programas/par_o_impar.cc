/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file par_o_impar.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Escriba un programa que te diga si un número es par o impar
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int number{0};

  std::cout << "Introduzca un número: ";
  std::cin >> number;

  if(number % 2 == 0) {
    std::cout << "Su número es par"; 
  } else {
    std::cout << "Su número es impar";
  }
}