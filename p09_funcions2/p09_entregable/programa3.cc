#include <iostream>
#include <vector>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa3.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 13/1172023
  * @brief Función que realiza la concatenación de 2 vectores
*/

/**
 * @brief Concatenación de 2 vectores
 * @param v1 Vector 1
 * @param v2 Vector 2
 * @return Concatenación de los vectores
*/

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
  vector<int> result = v1;
  result.insert(result.end(), v2.begin(), v2.end());
  return result;
}

int main() {
  vector<int> v1 = {1, 2, 3};
  vector<int> v2 = {4, 5, 6};
  vector<int> concatenated = concatenation(v1, v2);
  for (const auto& element : concatenated) {
    cout << element << " ";
  }
  return 0;
}