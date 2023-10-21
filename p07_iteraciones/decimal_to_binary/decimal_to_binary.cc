#include <iostream>
#include <vector>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file decimal_to_binary.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 21/10/2023
  * @brief Programa que convierte un número decimal en binario
*/

int main() {
  int decimal, resto, cociente;
  vector<int> mi_vector;
  cin >> decimal;
  while(decimal != 0) {
    cociente = decimal / 2;
    resto = decimal % 2;
    mi_vector.push_back(resto); // Almacenamos los digitos binarios en el vector
    decimal = cociente;
  }
  for(int it = 0; it < mi_vector.size(); it++) { // Recorremos el vector
    cout << mi_vector[it];
  }
  cout << endl;
}