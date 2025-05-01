/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file edad.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que solicita el año de su nacimiento y el año actual,
 *  y muestra por pantalla la edad del usuario
 * @bug There are no known bugs
*/

#include <iostream> // Para flujos de entrada y salida

int main() {
  int anio_nac{0}, anio_act{0};

  std::cout << "Año de nacimiento: ";
  std::cin >> anio_nac; 

  std::cout << "Año actual: ";
  std::cin >> anio_act; 

  int edad = anio_act - anio_nac; 

  std::cout << "Su edad es " << edad << " años." << std::endl;
}