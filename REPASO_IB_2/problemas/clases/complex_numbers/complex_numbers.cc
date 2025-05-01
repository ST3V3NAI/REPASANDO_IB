/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file complex_numbers.cc
 * @author Steven
 * @date 2025-04-23
 * @brief Definición de las función Usage y las definición
 * @bug There are no known bugs
 */

#include "complex_numbers.h"

void Usage(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << "This program has been executed with an incorrect params" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information " << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "Try to follow this estructure: <./executable>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void Complex::showNumber() const {
  std::cout << "(" << r_ << ", " << i_ << ")" << std::endl;
}

const std::ostream& operator<<(std::ostream& os, const Complex& other_) {
  os <<  "(" << other_.getReal() << ", " << other_.getImaginary() << ")";
  return os; 
}


Complex Complex::operator+(const Complex& other_) const {
  return Complex(r_ + other_.r_, i_ + other_.i_);
}


Complex Complex::operator-(const Complex& other_) const {
  return Complex(r_ - other_.r_, i_ - other_.i_);
}

Complex Complex::operator*(const Complex& other_) const {
  double r = r_ * other_.r_ - i_ * other_.i_;
  double i = r_ * other_.i_ + i_ * other_.r_;
  return Complex(r, i);
}