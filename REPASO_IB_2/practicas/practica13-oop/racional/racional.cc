/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file racional.cc
 * @author Steven
 * @date 2025-04-11
 * @brief Implemtación de la clase Rational y la función Usage
 * @bug There are no known bugs
*/

#include "racional.h"

/**
 * Función que comprueba si se ha usado correctamente el programa
 */
void Usage(int argc, char* argv[]) {
  if(argc != 3) {
    std::cerr << "This program has been executed with incorrect number of params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "Modo de uso: ./racionales fichero_entrada fichero_salida\n fichero_entrada: Fichero de texto donde estan los números | fichero_salida: Fichero de texto donde se alamcenan las operaciones realizadas \n ";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}


// Getters y Setters
int Rational::getNum() const { return num_ ; }
int Rational::getDen() const { return den_; }

void Rational::setNum(int num) { num_ = num; }
void Rational::setDen(int den) { den_ = den; }


// Sobrecraga de operadores unarios
Rational Rational::operator+(const Rational& other) const {
  int nuevo_num = num_ * other.den_ + other.num_ * den_;
  int nuevo_den = den_ * other.den_;
  int mcd = std::gcd(nuevo_num, nuevo_den);
  return Rational(nuevo_num / mcd, nuevo_den / mcd);
}

Rational Rational::operator-(const Rational& other) const {
  int nuevo_num = num_ * other.den_ - other.num_ * den_;
  int nuevo_den = den_ * other.den_;
  int mcd = std::gcd(nuevo_num, nuevo_den);
  return Rational(nuevo_num / mcd, nuevo_den / mcd);
}

Rational Rational::operator*(const Rational& other) const {
  int nuevo_num = num_ * other.num_;
  int nuevo_den = den_ * other.den_;
  int mcd = std::gcd(nuevo_num, nuevo_den);
  return Rational(nuevo_num / mcd, nuevo_den / mcd);
}

Rational Rational::operator/(const Rational& other) const {
  int nuevo_num = num_ * other.den_;
  int nuevo_den = den_ * other.num_;
  int mcd = std::gcd(nuevo_num, nuevo_den);
  return Rational(nuevo_num / mcd, nuevo_den / mcd);
}

bool Rational::operator<(const Rational& other) const {
  return (num_ / den_, other.num_ / other.den_);
}

bool Rational::operator>(const Rational& other) const {
  return (num_ / den_, other.num_ / other.den_);
}

// Sobrecarga de los operadores "<<" y ">>"
std::ostream& operator<<(std::ostream& out, const Rational& other) {
  out << other.num_ << " / " << other.den_;
  return out; 
}

std::istream& operator>>(std::istream& in, Rational& other) {
  in >> other.num_;
  return in;

  in >> other.den_;
  return in; 
}






