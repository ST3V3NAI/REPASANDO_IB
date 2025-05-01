/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file racional.h
 * @author Steven
 * @date 2025-04-11
 * @brief Declaración de la clase Rational y función Usage
 * @bug There are no known bugs
 */

#ifndef RACIONAL_H // Si no se define RACIONAL_H
#define RACIONAL_H // Define RACIONAL_H

#include <iostream> // Para flujos de entrada/salida
#include <cmath> // Para operaciones complicadas
#include <numeric> // Para std::gcd

void Usage(int argc, char* argv[]);

class Rational {
  public:
    // Cosntructor parametrizado
    Rational(int num = 1.0, int den = 1.0) : num_{num}, den_{den} {}
    
    // Getters y Setters
    int getNum() const;
    int getDen() const;

    void setNum(int num);
    void setDen(int den);

    // Métodos de la clase
    Rational operator+(const Rational& other) const; 
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;
    Rational operator/(const Rational& other) const;
    bool operator<(const Rational& other) const;
    bool operator>(const Rational& other) const; 

    // Sobrecarga de lo operadores << y >>
    friend std::ostream& operator<<(std::ostream& out, const Rational& other);
    friend std::istream& operator>>(std::istream& in, Rational& other);

  private:
    // Atributos
    int num_, den_;
};



#endif // RACIONAL_H