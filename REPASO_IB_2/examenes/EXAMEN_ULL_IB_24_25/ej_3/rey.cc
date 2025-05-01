/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file rey.cc
 * @author Steven
 * @date 2025-04-26
 * @brief Definición de la función Usage y la clase Rey
 * @bug There are no known bugs
 */

#include "rey.h"


/**
 * @brief Función que se encarga de comprobar si la entrada de parametros 
 * es correcta. 
 * 
 * @param[in] argc Cantidad de cadenas
 * @param[in] argv Matriz de argumento
 */
void Usage(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << "This program has been executed with an incorrect params";
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program will work if you follow this structure: <./executable> <letter_to_start>"; 
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * @brief Función que calcula los años gobernados
 * 
 * @return Los años que gobernó
 */
int Rey::howManyYears() const {
  return (year_of_end_ - year_of_start_); 
}

/**
 * @brief Función que compara los años de comienzo de los reyes
 * @param[in] other El otro objeto de la clase rey
 * @return retorna true si (2 < 1)
 * @return retorna false si (2 > 1)
 */
bool Rey::operator<(const Rey& other) const {
  return (year_of_start_ < other.year_of_start_);
}


/**
 * @brief Sobrecarga del operador "<<"
 * 
 * @param [in] os Flujo de salida 
 * @param[in] other Otro objeto de la clase rey
 * @return retorna la salida del programa
 */
std::ostream& operator<<(std::ostream& out, const Rey& other) {
  out << other.name_ << ' ' << other.year_of_start_ << ' ' << other.year_of_end_;
  return out; 
}


/**
 * @brief Sobrecarga del operador ">>"
 * 
 * @param[in] in Flujo de entrada
 * @param[in] other Otro objetos de la clase rey
 * @return retorna la entrada del programa
 */
std::istream& operator>>(std::istream& in, Rey& other) {
  in >> other.name_ >> other.year_of_start_ >> other.year_of_end_; 
  return in; 
}