/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file temperatures.h
 * @author Steven
 * @date 2025-04-18
 * @brief Declaración de las funciones Usage y las demás funciones
 * @bug There are no known bugs
*/

#ifndef TEMPERATURES_H
#define TEMPERATURES_H

#include <iostream>

void Usage(int argc, char* argv[]);
double FarenheitToCelsius(int temperature);
double FarenheitToAbsolute(int temperature);


#endif // TEMPERATURES_H