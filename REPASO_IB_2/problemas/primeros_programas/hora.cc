/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file hora.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que solicita la hora actual de reloj y cantidad
 * de horas y te dice la hora que marcará el reloj
 * @bug There are no known bugs
 */

#include <iostream> 

int main() {
  int act_hour{0}, qua_hours{0};

  std::cout << "Hora actual: ";
  std::cin >> act_hour;

  std::cout << "Cantidad de horas: ";
  std::cin >> qua_hours;

  int future_hour = act_hour + qua_hours;
  future_hour %= 12;

  if(future_hour == 0) future_hour = 12;

  std::cout << "En " << qua_hours << " , el reloj marcará las " << future_hour;
}