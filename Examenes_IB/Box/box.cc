#include "box.h"

Box::Box() {}

Box::Box(double length, double breadth, double height) {
  this->length_ = length;
  this->breadth_ = breadth_;
  this->height_ = height_;
}

bool Box::operator==(const Box& type) {
  return (length() == type.length_ && breadth() == type.breadth_ && height() == type.height_);
}

istream& operator>>(istream& is, Box& type) {
  cout << "Introducir largo: ";
  is >> type.length_;
  cout << "Introducir fondo: ";
  is >>type.breadth_;
  cout << "Introducir alto: ";
  is >> type.height_;
  return is;
}

ostream& operator<<(ostream& os, Box& type) {
  os << "Largo: " << type.length_ << endl;
  os << "Fondo: " << type.breadth_ << endl;
  os << "Alto: " << type.height_ << endl;
  return os;
}