#include <iostream>
#include <cmath>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file arithmetic_operators.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 12/10/2023
  * @brief Programa que calcula todas las operaciones que se puedden hacer con dos valores
*/

int main() {
  int a, b;
  cout << "Introducir dos valores cualquiera para a y b" << endl;
  cout << "Introducir a: ";
  cin >> a;
  cout << "Introducir b: ";
  cin >> b;
  cout << "OPERACIONES PARA LOS VALORES DE A Y B" << endl;
  cout << "-------------------------------------" << endl;
  cout << "a + b == " << a + b << endl;
  cout << "a - b == " << a - b << endl;
  cout << "a * b == " << a * b << endl;
  cout << "a / b == " << a / b << endl;
  cout << "a % b == " << a % b << endl;
  cout << "a > b == " << ((a > b) ? "true" : "false") << endl;
  cout << "a < b == " << ((a < b) ? "true" : "false") << endl;
  cout << "a == b => " << ((a == b) ? "true" : "false") << endl; 
  cout << "a != b => " << ((a == b) ? "true" : "false") << endl;
  return 0;
}