#include "concatenation.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file concatenation.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 15/11/2023
  * @brief Implementación de las funciones del programa
*/

/**
 * @brief Concatenación de 2 vectores
 * @param vector_1 Vector 1
 * @param vector_2 Vector 2
 * @return Concatenación de los vectores
*/

vector<int> Concatenation(vector<int>& vector_1, vector<int>& vector_2) {
  vector<int> concatenacion = vector_1;
  concatenacion.insert(concatenacion.end(), vector_2.begin(), vector_2.end());
  return concatenacion;
}