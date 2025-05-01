/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file num_lineas.h
 * @author Steven
 * @date 2025-04-21
 * @brief Declaración de las funciones Usage y las demas
 * @bug There are no known bugs
 */

#ifndef NUM_LINEAS_H
#define NUM_LINEAS_H

#include <iostream>
#include <string>
#include <fstream>

void Usage(int argc, char* argv[]);
void EnumerateLines(std::ifstream& archivo, std::ostream& archivo2);

#endif //NUM_LINEAS_H