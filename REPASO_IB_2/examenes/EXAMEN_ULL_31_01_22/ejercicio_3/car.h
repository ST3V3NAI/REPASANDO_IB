/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file car.h
 * @author Steven
 * @date 2025-05-03
 * @brief Delaración de la clase Car
 * @bug There are no known bugs
 */

#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
  public:  
    // Constructor parametrizado
    Car(const std::string& model, const std::string& plate, const int kilometers) : model_{model}, plate_{plate}, kilometers_{kilometers} {}
    // Constructor por defecto 
    Car() : model_{" "}, plate_{" "}, kilometers_{0} {}
    // Destructor 
    ~Car() {}

    // Getters
    std::string getModel() const { return model_; }
    std::string getPlate() const { return plate_; }
    int getKilometers() const { return kilometers_; }

    // Setters
    void setModel(const std::string& model) { model_ = model; }
    void setPlate(const std::string& plate) { plate_ = plate; }
    void setKilometers(int kilometers) { kilometers_ = kilometers; }

    // Sobrecarga de los operadores "<<" y ">>"
    friend std::ostream& operator<<(std::ostream& out, const Car& car); 
    friend std::istream& operator>>(std::istream& in, Car& car);

    // Sobrecarga del operador de comparación ">"
    bool operator>(const Car& car) const; 

  private: 
    // Atributos
    std::string model_;
    std::string plate_;
    int kilometers_; 
}; 


#endif // CAR_H