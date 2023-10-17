#include <iostream>
#include <iomanip>
using namespace std;


/*Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file average.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 16/10/2023
 * @brief Programa que te pide xnumeros y te calcula su media 
*/

int main() {
  double numeros, resultado;
  int iterador;
  while(cin >> numeros) {
    resultado += numeros;
    iterador++;
  }
  resultado /= iterador;
  cout << setprecision(2)  << fixed << resultado << endl;
  return 0;
}
