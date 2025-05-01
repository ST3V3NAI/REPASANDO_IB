/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file serie_de_fibonacci.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que realiza la serie de fibonacci
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int first_term{0}, second_term{1}, n;


  std::cout << "Digame n: ";
  std::cin >> n;

  std::cout << first_term << " " << second_term << " ";
  for(int i = 0; i <= n; ++i) {
    int next = first_term + second_term;
    std::cout << next << " ";
    first_term = second_term;
    second_term = next;
  }
}