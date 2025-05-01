/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file source_print.h
 * @author Steven
 * @date 2025-04-21
 * @brief Declaración de las funciones Usage y las demás
 * @bug There are no known bugs
 */


#ifndef SOURCE_PRINT_H
#define SOURCE_PRINT_H

#include <iostream>
#include <fstream>
#include <string>

void Usage(int argc, char* argv[]);
void SourcePrint(std::ifstream& archivo);

#endif