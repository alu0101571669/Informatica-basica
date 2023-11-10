#include "approximate_root.h"

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file hypotenuse.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 09/11/2023
  * @brief Programa que calcula la hipotenusa de un triángulo
*/

int main(int argc, char* argv[]) {
  int hipotenusa;
  if (argc != 3) {
    cout << "Se deben de introducir dos catetos" << endl;
    exit(EXIT_SUCCESS);
  }
  int cateto1 = stoi(argv[1]);
  int cateto2 = stoi(argv[2]);
  // Realizo el cuadrado de los catetos
  cateto1 = pow(cateto1, 2);
  cateto2 = pow(cateto2, 2);
  // Calculamos la hipotenusa utilizando la función del apartado 3
  hipotenusa = cateto1 + cateto2;
  cout << "Hipotenusa del triángulo: " << Approximate(hipotenusa) << endl;
  return 0;
}