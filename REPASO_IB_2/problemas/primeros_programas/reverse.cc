/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file reverse.cc
 * @author Steven
 * @date 2025-04-12
 * @brief Programa que invierte los numeros
 * @bug There are no known bugs
 */

#include <iostream>

int main(){
  int numero{0}, numeroInvertido{0};

  std::cout << "Introduzca un numero: ";
  std::cin >> numero;

  while(numero != 0){
    int digito = numero % 10;

    numeroInvertido = numeroInvertido * 10 + digito;

    // numeroInvertido = numeroInvertido * 10 + (numero % 10);
    // numero /= 10; 

    numero /= 10;    
  }

  std::cout << numeroInvertido << std::endl;

  return 0;
}
