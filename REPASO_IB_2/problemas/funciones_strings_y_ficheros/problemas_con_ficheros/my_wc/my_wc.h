/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file my_wc.h
 * @author Steven
 * @date 2025-04-21
 * @brief Declaración de las funciones Usage y las demás
 * @bug There are no known bugs
 */

#ifndef MY_WC_H
#define MY_WC_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void Usage(int argc, char* argv[]);
void WordCount(std::ifstream& archivo);

#endif // MY_WC_H