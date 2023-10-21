#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file sum_of_digits.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 21/10/2023
  * @brief Programa que convierte un número binario en decimal
*/

int main() {
  string binario;
  int numero, suma_de_numeros{0}, exponente{0};
  vector<char> mi_vector;
  cin >> binario;
  for(const char simbolo : binario) {
    if(simbolo != '0' || simbolo != '1') { // Si los simbolos no son 0 o 1 salir del programa
      cout << "Wrong Input" << endl;
      exit(EXIT_SUCCESS);
    }
    else {
      mi_vector.push_back(simbolo); // Introducimos los símbolos binarios
    }
  }
  for(int it = mi_vector.size() - 1; it >= 0; it--) {
    numero = static_cast<int>(mi_vector[it] - '0'); // Convierto el char a entero
    suma_de_numeros += numero * pow(2, exponente);
    exponente++;
  }
  cout << suma_de_numeros << endl;
}