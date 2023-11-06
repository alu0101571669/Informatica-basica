#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa1.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 06/11/2023
  * @brief Programa que indica si un año es bisiesto
*/

/**
 * @brief Función para especificar si un año es bisiesto
 * @param year Año a comprobar
 * @return Devuelve 1 si es bisiesto y en caso contrario 0
*/

bool is_leap_year(int year) {
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    return true;
  }
  return false;
}