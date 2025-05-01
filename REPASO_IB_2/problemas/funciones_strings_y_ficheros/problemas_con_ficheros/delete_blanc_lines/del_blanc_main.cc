/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file del_blanc_main.cc
 * @author Steven
 * @date 2025-04-21
 * @brief Programa que elimina lineas en blanco
 * @bug There are no known bugs
 */

#include "del_blanc.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::ifstream ar_1{argv[1], std::ios::app};
  std::ofstream ar_2{argv[2], std::ios::in};

  DeletingBlancLines(ar_1, ar_2);
}