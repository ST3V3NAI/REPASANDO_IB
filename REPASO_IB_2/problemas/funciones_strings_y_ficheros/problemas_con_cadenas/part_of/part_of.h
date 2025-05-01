/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file part_of.h
 * @author Steven
 * @date 2025-04-15
 * @brief Definición de la función Usage y PartOf
 * @bug There are no known bugs
 */

#ifndef PART_OF
#define PART_OF

#include <iostream>
#include <string>

void Usage(int argc, char* argv[]);
bool PartOf(std::string& phrase, std::string internal_phrase);

#endif // PART_OF