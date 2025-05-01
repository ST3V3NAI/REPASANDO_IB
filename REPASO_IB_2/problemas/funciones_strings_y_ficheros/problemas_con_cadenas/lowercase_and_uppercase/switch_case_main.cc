/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file switch_case_main.cc
 * @author Steven
 * @date 2025-04-14
 * @brief Programa que modifica todas las letras de una cadena
 * de forma que transforma las mayyúsculas en minúsucla y viceversa. 
 ** @bug There are no known bugs
 */

#include "switch_case.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];

  LowercaseAndUppercase(phrase);
}