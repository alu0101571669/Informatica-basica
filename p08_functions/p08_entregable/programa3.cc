#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa3.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 06/11/2023
  * @brief Programa que indica si una fecha es válida
*/

/**
 * @brief Función que indica si una fecha es válida
 * @param d Día
 * @param m Mes
 * @param y Año
 * @return Devuelve 1 si la fecha introducida es válida, en otros casos devuelve 0
*/

bool is_valid_date(int d, int m, int y) {
  // Verifica si el año es positivo.
  if (y < 1) {
    return false;
  }
  // Verifica si el mes se encuentra entre Enero y Diciembre
  if (m < 1 || m > 12) {
    return false;
  }
  // Determina el número máximo de días para el mes dado.
  int max_dias;
  if (m == 2) {
    // Verifica para febrero, teniendo en cuenta los años bisiestos.
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
      max_dias = 29;
    } 
    else {
      max_dias = 28;
    }
  } else if (m == 4 || m == 6 || m == 9 || m == 11) {
    max_dias = 30;
  }
  else {
    max_dias = 31;
  }
  // Comprueba si el día es válido (entre 1 y el máximo para el mes dado).
  if (d < 1 || d > max_dias) {
    return false;
  }
  // Si se cumplen todas las condiciones, la función devuelve `true`, indicando que la fecha es válida; de lo contrario, devuelve `false`.
  return true;
}