/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file part_of_main.cc
 * @author Steven
 * @date 2025-04-15
 * @brief Escriba un porgrama que dadas dos cadenas diga si una forma parte
 * de la otra
 * @bug There are no known bugs
 */

#include "part_of.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];
  std::string internal_phrase = argv[2];
  
  if(PartOf(phrase, internal_phrase) == 0) {
    std::cout << "No. " << std::endl;
  } else {
    std::cout << "Yes. " << std::endl; 
  }
}