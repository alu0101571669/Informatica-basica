#include "fecha.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file fecha.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/12/2023
  * @brief Implementación de la clase Fecha
*/

Fecha::Fecha() {} // Constructor por defecto

/**
 * @brief Constructor de la clase Fecha
 * @param dia Día
 * @param mes Mes
 * @param anyo Año
 * @return Objeto de la clase Fecha
*/

Fecha::Fecha(int dia, int mes, int anyo) {
  this->dia_ = dia;
  this->mes_ = mes;
  this->anyo_ = anyo;
}

/**
 * @brief Comprobar que la fecha es válida
 * @param d Día
 * @param m Mes
 * @param y Año
 * @return 1 en caso de verdadero, 0 en caso contrario
*/

bool Fecha::IsValidDate() {
  // Verifica si el año es positivo.
  if (anyo_ < 1) {
    return false;
  }
  // Verifica si el mes se encuentra entre Enero y Diciembre
  if (mes_ < 1 || mes_ > 12) {
    return false;
  }
  // Determina el número máximo de días para el mes dado.
  int max_dias;
  if (mes_ == 2) {
    // Verifica para febrero, teniendo en cuenta los años bisiestos.
    if ((anyo_ % 4 == 0 && anyo_ % 100 != 0) || (anyo_ % 400 == 0)) {
      max_dias = 29;
    } 
    else {
      max_dias = 28;
    }
  } else if (mes_ == 4 || mes_ == 6 || mes_ == 9 || mes_ == 11) {
    max_dias = 30;
  }
  else {
    max_dias = 31;
  }
  // Comprueba si el día es válido (entre 1 y el máximo para el mes dado).
  if (dia_ < 1 || dia_ > max_dias) {
    return false;
  }
  // Si se cumplen todas las condiciones, la función devuelve `true`, indicando que la fecha es válida; de lo contrario, devuelve `false`.
  return true;
}

/**
 * @brief Comprobar que el año es bisiesto
 * @return Devolver 1 en verdadero, 0 en caso contrario
*/

bool Fecha::EsBisiesto() {
  if (anyo_ % 4 == 0 && anyo_ % 100 != 0 || anyo_ % 400 == 0) {
    return true;
  }
  return false;
}

/**
 * @overload Sobrecarga del operador >>
*/

istream& operator>>(istream& is, Fecha& date) {
  is >> date.dia_;
  is >> date.mes_;
  is >> date.anyo_;
  return is;
}

/**
 * @overload Sobrecarga del operador <<
*/

ostream& operator<<(ostream& os, Fecha& date) {
  os << date.dia_ << "/" << date.mes_ << "/" << date.anyo_;
  return os;
}