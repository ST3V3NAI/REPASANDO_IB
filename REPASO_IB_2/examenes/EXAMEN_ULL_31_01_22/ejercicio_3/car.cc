/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file car.cc
 * @author Steven
 * @date 2025-05-03
 * @brief Definición de la clase Car
 * @bug There are no known bugs
 */

#include "car.h"

/**
 * @brief Sobrecargar del operador de extracción "<<"
 * 
 * @param[in] out Flujo de entrada
 * @param[in] car Objeto de la clase
 * @return retornamos el flujo de entrada
 */
std::ostream& operator<<(std::ostream& out, const Car& car) {
  out << car.model_ << ' ' << car.plate_ << ' ' << car.kilometers_; 
  return out; 
}

std::istream& operator>>(std::istream& in, Car& car) {
  std::cout << "Introduzca la marca del coche\n";
  std::getline(in, car.model_);
  std::cout << "Introduzca la matricula\n";
  in >> car.plate_;
  std::cout << "Introduzca los kilometros\n";
  in >> car.kilometers_;
  return in;
}

bool Car::operator>(const Car& car) const {
  return kilometers_ > car.kilometers_;
}



