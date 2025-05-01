/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 * @file substring.cc
 * @author Steven
 * @date 2025-04-15
 * @brief Definición de la función Usage y la substr
 * @bug There are no known bugs
 */

#include "substring.h"
#include <string>

void Usage(int argc, char* argv[]) {
  if(argc != 4) {
    std::cerr << "This program has been executed with the incorrect num of parameters" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program need to follow this structure to work: <./executable> <phrase> <pos> <length>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

std::string substr(const std::string& str, size_t pos, size_t len) {
  if(pos >= str.size()) {
    return "";
  }

  if(pos + len > str.size()) {
    len = str.size() - pos;
  }

  std::string result;
  for(size_t i = 0; i < len; ++i) {
    result += str[pos + i];
  }

  return result;
}
