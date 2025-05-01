/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file input_string_main.cc
 * @author Steven
 * @date 2025-04-16
 * @brief Programa que aplica funciones que modifican la frase
 * poniendo la siguente palabra y la anterior, además de dividir por
 * su represengación en ASCII
 * @bug There are no known bugs
 */

#include "input_string.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];

  std::cout << "Less: "; 
  OneLess(phrase);
  std::cout << "\nMore: ";
  OneMore(phrase);
  std::cout << "\nAscii Rep.: ";
  AsciiRepresentation(phrase);
}