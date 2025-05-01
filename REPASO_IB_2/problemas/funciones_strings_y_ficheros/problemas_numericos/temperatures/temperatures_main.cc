/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file temperatures_main.cc
 * @author Steven
 * @date 2025-04-18
 * @brief Make a program that prints a table of temperatures
 * into a Farenheit, Celsius and Abolsute
 * @bug There are no known bugs
 */

#include "temperatures.h"
#include <iomanip>

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int min_temp = std::atoi(argv[1]);
  int max_temp = std::atoi(argv[2]);
  int difference = std::atoi(argv[3]); 

  std::cout << "Fahrenheit Celsius Absolute\n";
  for(int i = 0; i <= max_temp; i += difference) {
    std::cout << min_temp << "\t" << std::fixed << std::setprecision(2) << FarenheitToCelsius(min_temp) << "\t" 
                                  << std::fixed << std::setprecision(2) << FarenheitToAbsolute(min_temp) << std::endl; 
    min_temp += difference; 
  } 
}