#include "scalar_product.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file scalar_product.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 09/11/2023
  * @brief Implementación de las funciones del programa
*/

/**
 * @brief Función que verifica si la dimensión de los vectores es la misma
 * @param size1 Tamaño del primer vector
 * @param size2 Tamaño del segundo vector
 * @return 1 en caso de que la dimensión sea la misma y 0 en caso contrario
*/

bool IsEqual(int size1, int size2) {
  if (size1 == size2) {
    return true;
  }
  return false;
}

/**
 * @brief Calcular el producto escalar de 2 vectores
 * @param vector1 Primer vector
 * @param vector2 Segundo vector
 * @return Producto escalar
*/

double ScalarProduct(vector<double>& vector1, vector<double>& vector2) {
  double suma{0};
  // Recorrer ambos vectores
  for (auto it = vector1.begin(), it2 = vector2.begin(); it != vector1.end(); it++, it2++) {
    suma += *it * *it2;
  }
  return suma;
}

/**
 * @brief Función para imprimir los vectores
 * @param mi_vector Vector a imprimir
*/

void PrintVector(vector<double>& mi_vector) {
  cout << "[ ";
  for (auto it = mi_vector.begin(); it != mi_vector.end(); it++) {
    cout << *it;
    if (next(it) != mi_vector.end()) {
      cout << ", ";
    }
  }
  cout << " ]" << endl;
}