#include "car.h"

Car::Car() {}

Car::Car(string model, string plate, int kilometers) {
  this->model_ = model;
  this->plate_ = plate;
  this->kilometers_ = kilometers;
}

bool Car::operator>=(const Car& type) {
  return this->kilometers() >= type.kilometers_;
}

istream& operator>>(istream& is, Car& type) {
  cout << "Modelo ? ";
  is >> type.model_;
  cout << "Plate ? ";
  is >> type.plate_;
  cout << "Kilometers ? ";
  is >> type.kilometers_;
  return is;
}

ostream& operator<<(ostream& os, Car& type) {
  os << "Modelo: " << type.model_ << endl;
  os << "Plate: " << type.plate_ << endl;
  os << "Kilometers: " << type.kilometers_ << endl;
  return os;
}