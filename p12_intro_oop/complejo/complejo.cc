#include "complejo.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file complejo.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/12/2023
  * @brief Implementación de la clase Complejo
*/

Complejo::Complejo() {} // Constructor predeterminado

/**
 * @brief Constructor de la clase Complejo
 * @param parte_real Parte real del número
 * @param parte_imaginaria Parte imaginaria del número
 * @return Objeto de la clase Complejo
*/

Complejo::Complejo(double parte_real, double parte_imaginaria) {
  this->real_ = parte_real;
  this->imaginaria_ = parte_imaginaria;
}

/**
 * @overload Sobrecarga del operador +
*/

Complejo Complejo::operator+(const Complejo& parte) {
  return Complejo(real_ + parte.real_, imaginaria_ + parte.imaginaria_);
}

/**
 * @overload Sobrecarga del operador -
*/

Complejo Complejo::operator-(const Complejo& parte) {
  return Complejo(real_ - parte.real_, imaginaria_ - parte.imaginaria_);
}

/**
 * @overload Sobrecarga del operador de entrada
*/

istream& operator>>(istream& is, Complejo& parte) {
  cout << "Parte real: ";
  is >> parte.real_;
  cout << "Parte imaginaria: ";
  is >> parte.imaginaria_;
  return is;
}

/**
 * @overload Sobrecarga del operador de salida
*/

ostream& operator<<(ostream& os, Complejo& parte) {
  if (parte.imaginaria_ < 0) {
    os << parte.real_ << " - " << parte.imaginaria_ * -1 << "i" << endl;
  }
  else {
    os << parte.real_ << " + " << parte.imaginaria_ << "i" << endl;
  }
  return os;
}