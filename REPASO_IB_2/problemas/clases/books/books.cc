/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file books.cc
 * @author Steven
 * @date 2025-04-22
 * @brief Defincición de las funciones Usage y las demas funciones
 * @bug There are no known bugs
 */


#include "books.h"

void Usage(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << "This program has been executed with an incorrect params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information " << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "Try to follow this estructure: <./executable> <taxes>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

double Book::addTaxes(double taxes) {
  return (price_ + (price_ * (taxes / 100.0))); 
}

void Book::showData() const {
  std::cout << title_ << ", " << date_of_publication_ << ", " << price_ << ", "; 
}
