#include "car.h"

Car::Car() {} // Constructor por defecto

/**
 * @brief Cosntructor de la clase Car
 * @param model Modelo del coche
 * @param plate Placa del coche
 * @param kilometers Kilometraje del coche
*/

Car::Car(string model, string plate, int kilometers) {
  this->model_ = model;
  this->plate_ = plate;
  this->kilometers_ = kilometers;
}

/**
 * @overload Sobrecarga del operador >>
*/

istream& operator>>(istream& is, Car& car) {
  cout << "Modelo ? ";
  cin >> car.model_;
  cout << "Placa ? ";
  cin >> car.plate_;
  cout << "Kilometraje ? ";
  cin >> car.kilometers_;
  return is;
}

/**
 * @overload Sobrecarga del operador <<
*/

ostream& operator<<(ostream& os, Car& car) {
  cout << "Modelo: " << car.model_ << endl;
  cout << "Placa: " << car.plate_ << endl;
  cout << "kilometraje: " << car.kilometers_ << endl;
  return os;
}

/**
 * @overload Sobrecarga del operador <
*/

bool Car::operator<(const Car& car) {
  return kilometers() < car.kilometers_;
}