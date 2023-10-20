#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file boolean_operators.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 12/10/2023
  * @brief Programa que muestra la tabla de la verdad para las puertas AND OR y NOT de los valor A y B
*/

int main() {
  bool A0 = false;
  bool B0 = false;
  bool A1 = false;
  bool B1 = true;

  cout << "A  " << "B  " << "A AND B  " << "A OR B  " << "NOT A  " << "NOT B" << endl;
  for(int i = 0; i <=1; i++) { // Primera y última fila de la tabla
    cout << (A0 ? "1" : "0") << "  " << (B0 ? "1" : "0") << "     ";
    cout << ((A0 && B0) ? "1" : "0") << "        ";
    cout << ((A0 || B0) ? "1" : "0") << "      ";
    cout << (!A0 ? "1" : "0") << "      ";
    cout << (!B0 ? "1" : "0") << "     " << endl;
    for(int i = 0; i <= 0; i++) { // Segunda y Tercera fila de la tabla
      cout << (A1 ? "1" : "0") << "  " << (B1 ? "1" : "0") << "     ";
      cout << ((A1 && B1) ? "1" : "0") << "        ";
      cout << ((A1 || B1) ? "1" : "0") << "      ";
      cout << (!A1 ? "1" : "0") << "      ";
      cout << (!B1 ? "1" : "0") << "     " << endl;
      A1 = !A1;
      B1 = !B1;
    }
    A0 = !A0;
    B0 = !B0;
  }
  return 0;
}