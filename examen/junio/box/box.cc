#include "box.h"

Box::Box() {} // cCnstructor por defecto

/**
 * @brief Constructor de la clase Box
 * @param longitud Longitud de la caja
 * @param ancho Ancho de la caja
 * @param altura Altura de la caja
*/

Box::Box(double longitud, double ancho, double altura) {
  this->longitud_ = longitud;
  this->ancho_ = ancho;
  this->altura_ = altura;
}

/**
 * @overload Sobrecarga del operador ==
*/

bool Box::operator==(Box& type) {
  return (Longitud() == type.longitud_ && Ancho() == type.ancho_ && Altura() == altura_);
}

/**
 * @overload Sobrecarga del operador >>
*/

istream& operator>>(istream& is, Box& type) {
  cout << "Longitud ? ";
  cin >> type.longitud_;
  cout << "Ancho ? ";
  cin >> type.ancho_;
  cout << "Altura ? ";
  cin >> type.altura_;
  return is;
}

/**
 * @overload Sobrecarga del operador <<
*/

ostream& operator<<(ostream& os, Box& type) {
  cout << " === Información de la caja ===" << endl;
  cout << "Longitud: " << type.longitud_ << endl;
  cout << "Ancho: " << type.ancho_ << endl;
  cout << "Altura: " << type.altura_ << endl;
  return os;
}