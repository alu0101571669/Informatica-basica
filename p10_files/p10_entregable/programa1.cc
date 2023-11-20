#include <iostream>
#include <vector>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa1.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 20/11/2023
  * @brief Función que muestra la posición del elemento mayor de un vector
*/

/**
 * @brief Función para obtener la posición del elemento mayor de un vector
 * @param v Vector
 * @param m Tamaño del vector
 * @return Posición del valor más alto del vector
*/

int position_maximum(const vector<double>& v, int m) {
  // Asegurarse que m está dentro del rango
  if (m < 0 || m >= v.size()) {
    return -1;
  }
  double max_value = v[0];
  int max_position = 0;
  for (int i = 1; i <= m; ++i) {
    // Actualizar el valor máximo en caso de que sea necesario
    if (v[i] > max_value) {
      max_value = v[i];
      max_position = i;
    }
  }
  return max_position;
}