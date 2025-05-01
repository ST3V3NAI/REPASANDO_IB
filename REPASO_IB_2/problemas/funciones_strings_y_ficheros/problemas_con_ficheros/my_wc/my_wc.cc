/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file my_wc.cc
 * @author Steven
 * @date 2025-04-21
 * @brief Definición de las funciones Usage y las demás
 * @bug There are no known bugs
 */

#include "my_wc.h"


void Usage(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << "This program has been executed with an incorrect params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information " << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "Try to follow this estructure: <./executable> <file.txt>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void WordCount(std::ifstream& archivo) {
  std::string linea;
  int contador_de_lineas{0}, contador_de_palabras{0}, contador_de_caracteres{0};
  while(getline(archivo, linea)) {
    ++contador_de_lineas;
  }

  contador_de_caracteres += linea.length();

  std::istringstream streamLinea(linea);
  std::string palabra;
  while (streamLinea >> palabra) {
    ++contador_de_palabras;
  }

  std::cout << contador_de_lineas << " " << contador_de_palabras << " " << contador_de_caracteres << " " << std::endl;


}