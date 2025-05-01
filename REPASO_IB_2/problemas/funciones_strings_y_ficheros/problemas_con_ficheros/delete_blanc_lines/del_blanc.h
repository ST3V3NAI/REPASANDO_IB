/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file del_blanc.h
 * @author Steven
 * @date 2025-04-21
 * @brief Declaración de las funciones Usage y las demás
 * @bug There are no known bugs
 */

#ifndef DEL_BLANC_H
#define DEL_BLANC_H

#include <iostream>
#include <string>
#include <fstream>

void Usage(int argc, char* argv[]);
void DeletingBlancLines(std::ifstream& archivo_1, std::ofstream& archivo_2);


#endif // DEL_BLANC_H