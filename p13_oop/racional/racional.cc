#include "racional.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file racional.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 11/12/2023
  * @brief Implementación de la clase Racional
*/

Racional::Racional() {} // Constructor por defecto

/**
 * @brief Constructor de la clase Racional
 * @param numerador Numerador de la fracción
 * @param denominador Denominador de la fracción
 * @return Objeto de la clase Racional
*/

Racional::Racional(int numerador, int denominador) {
  assert(denominador != 0); // Parar si el denominador es igual a 0
  this->numerador_ = numerador;
  this->denominador_ = denominador;
}

/**
 * @brief Función para calcular el número racional
 * @return Número racional
*/

const double Racional::Value() const {
  return (static_cast<double>(numerador_) / static_cast<double>(denominador_));
}

/**
 * @overload Sobrecarga del operador +
 * @return Suma de las fracciones
*/

Racional Racional::operator+(const Racional& r) {
  int nuevo_numerador = (numerador_ * r.denominador_) + (denominador_ * r.numerador_);
  int nuevo_denominador = (denominador_ * r.denominador_);
  return Racional(nuevo_numerador, nuevo_denominador);
}

/**
 * @overload Sobrecarga del operador -
 * @return Resta de las fracciones
*/

Racional Racional::operator-(const Racional& r) {
  int nuevo_numerador = (numerador_ * r.denominador_) - (denominador_ * r.numerador_);
  int nuevo_denominador = (denominador_ * r.denominador_);
  return Racional(nuevo_numerador, nuevo_denominador);
}

/**
 * @overload Sobrecarga del operador *
 * @return Multiplicación de las fracciones
*/

Racional Racional::operator*(const Racional& r) {
  return Racional((numerador_ * r.numerador_), (denominador_ * r.denominador_));
}

/**
 * @overload Sobrecarga del operador /
 * @return División de las fracciones
*/

Racional Racional::operator/(const Racional& r) {
  return Racional((numerador_ * r.denominador_), (denominador_ * r.numerador_));
}

/**
 * @overload Sobrecarga del operador >>
*/

istream& operator>>(istream& is, Racional& r) {
  assert(r.denominador_ != 0); // Parar si el denominador es igual a 0
  is >> r.numerador_ >> r.denominador_;
  return is;
}

/**
 * @overload Sobrecarga del operador <<
*/

ostream& operator<<(ostream& os, Racional& r) {
  os << r.numerador_ << "/" << r.denominador_;
  return os;
}

/**
 * @brief Sobrecarga del operador =
 * @return Devuelve 1 en caso de verdadero, 0 en caso contrario
*/

bool Racional::operator=(const Racional& r) {
  return fabs(Value() - r.Value()) < EPSILON;
}

/**
 * @brief Sobrecarga del operador <
 * @return Devuelve 1 en caso de verdadero, 0 en caso contrario
*/

bool Racional::operator<(const Racional& r) {
  return (r.Value() - Value()) > EPSILON;
}

/**
 * @brief Sobrecarga del operador >
 * @return Devuelve 1 en caso de verdadero, 0 en caso contrario
*/

bool Racional::operator>(const Racional& r) {
  return (Value() - r.Value()) > EPSILON;
}