/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file books_main.cc
 * @author Steven
 * @date 2025-04-22
 * @brief Programa que te muestra el resultado de todo
 * @bug There are no known bugs
 */

#include "books.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  Book book1{"El quijote de la Mancha", 1605, 21.00};
  Book book2{"El lazarillo de Torme", 1554, 18.00};
  Book book3{"Los pilares de la Tierra", 1989, 27.00};
  int taxes = std::atoi(argv[1]);

  book1.showData();
  std::cout << book1.addTaxes(taxes);

  std::cout << std::endl;

  book2.showData();
  std::cout << book2.addTaxes(taxes);

  std::cout << std::endl;

  book3.showData();
  std::cout << book3.addTaxes(taxes);

}