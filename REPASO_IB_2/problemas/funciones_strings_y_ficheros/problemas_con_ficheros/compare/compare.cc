/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file compare.cc
 * @author Steven
 * @date 2025-04-22
 * @brief Definción de las funciones Usage y ComparingTwoFiles
 * @bug There are no known bugs
 */

#include "compare.h"

void Usage(int argc, char* argv[]) {
  if(argc != 3) {
    std::cerr << "This program has been executed with an incorrect params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information " << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "Try to follow this estructure: <./executable> <file.txt> <file_2.txt>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}


void ComparingTwoFiles(std::ifstream& file_1, std::ifstream& file_2) {
  int lines_counter{1}; 
  std::string linea; 
  std::string linea_2; 

  while(std::getline(file_1, linea) && std::getline(file_2, linea_2)) {
    if(linea == linea_2) {
      ++lines_counter; 
    } else {
      std::cout << "La línea " << lines_counter << " es diferente" << std::endl;  
      ++lines_counter;
    }
  } 


}