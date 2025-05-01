/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file compare.h
 * @author Steven
 * @date 2025-04-22
 * @brief Declaración de las funciones Usage y ComparingTwoFiles
 * @bug There are no known bugs
 */

#ifndef COMPARE_H
#define COMPARE_H

#include <iostream>
#include <fstream>
#include <string>

void Usage(int argc, char* argv[]);
void ComparingTwoFiles(std::ifstream& file_1, std::ifstream& file_2);


#endif // COMPARE_H