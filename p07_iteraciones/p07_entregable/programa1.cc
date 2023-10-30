#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa1.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 30/10/2023
  * @brief Programa que imprime el piso, el techo y el redondeo de un número
*/

#include <iostream>
#include <cmath>

int main() {
  double numero;
  int suelo, techo, redondeo;
  cin >> numero;
  suelo = floor(numero);
  techo = ceil(numero);
  redondeo = (numero < (double)suelo + 0.5) ? suelo : techo;
  cout << suelo << " " << techo << " " << redondeo << endl;
  return 0;
}