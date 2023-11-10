#include "approximate_root.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file approximate_root.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 09/11/2023
*/

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Se debe de poner un número para calcular su raíz cuadrada" << endl;
    exit(EXIT_SUCCESS);
  }
  int numero = stoi(argv[1]);
  cout << "Raíz cuadrada del número: " << Approximate(numero) << endl;
  return 0;
}