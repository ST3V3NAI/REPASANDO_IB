/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file car_main.cc
 * @author Steven
 * @date 2025-05-03
 * @brief Programa que compara los kilometrajes de dos coches
 * y te dice cual de los dos es mayor. 
 * @bug There are no known bugs
 */

#include "car.h"

int main() {
  Car car1{"Toyota Corolla 2018", "ABC-5472", 85320};
  Car car2{"Ford Focus 2020", "ZXY-9210", 100000};

  std::cout << "Los coches instanciados son: " << std::endl; 
  std::cout << "car1 { " << car1 << " } " << std::endl; 
  std::cout << "car2 { " << car2 << " }"  << std::endl;

  if(car1 > car2) {
    std::cout << car1 << " tiene más kilometrajes que el " << car2 << std::endl; 
  } else {
    std::cout << car2 << " tiene más kilometrajes que el " << car1 << std::endl; 
  }

  Car car3; 
  Car car4; 
  std::cin >> car3;
  std::cout << "car3 = " << car3 << std::endl; 
  std::cin >> car4; 
  std::cout << "car4 = " << car4 << std::endl; 

  return 0; 
}