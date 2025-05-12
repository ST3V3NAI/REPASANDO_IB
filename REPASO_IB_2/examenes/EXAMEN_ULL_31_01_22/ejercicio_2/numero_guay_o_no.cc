/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file numero_guay_o_no.cc
 * @author Steven
 * @date 2025-05-03
 * @brief Programa qie dice si la suma de los digitos de las posiciones impares 
 * es un número par o no. 
 * @bug There are no known bugs
 */

#include <iostream>

int main() {
  int numero{0}, suma_de_numeros_guay{0}, position{1}; 

  std::cout << "Digame el número: ";
  std::cin >> numero; 

  while(numero != 0) {
    int digito = numero % 10;

    if(position % 2 != 0) {
      suma_de_numeros_guay += digito;
    }

    numero /= 10;
    position++;
  }

  if(suma_de_numeros_guay % 2 == 0) {
    std::cout << "N es GUAY " << std::endl; 
  } 
  if (suma_de_numeros_guay % 2 != 0) {
    std::cout << "N no es GUAY " << std::endl; 
  }

  return 0; 
}