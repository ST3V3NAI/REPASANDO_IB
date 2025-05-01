/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file input_string.h
 * @author Steven
 * @date 2025-04-16
 * @brief Definición de las funciones Usage y las demás funciones
 * @bug There are no known bugs
 */

#ifndef INPUT_STRING_H
#define INPUT_STRING_H

#include <iostream>

void Usage(int argc, char* argv[]);
void OneMore(std::string& phrase);
void OneLess(std::string& phrase);
void AsciiRepresentation(std::string& phrase);


#endif // INPUT_STRING_H