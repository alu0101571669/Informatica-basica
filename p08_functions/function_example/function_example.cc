#include <iostream>
#include <cmath>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file function_example.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 02/11/2023
  * @brief Programa que realiza el cálculo de una determinada función matemática
*/

/**
 * @brief Imprime lo que hace el programa
*/

void PrintProgramPurpose() {
  cout << "Programa que realiza una función para unos valores de x, y, z." << endl;
}

/**
 * @brief Función que sustituye los valores de x, y, t en una determinada función
 * @param x Valor de x
 * @param y Valor de y
 * @param t Valor de t
 * @return Devuelve el resultado de sustituir los valores de x, y, t
*/

double Fuction(double x, double y, double t) {
  return (sqrt(2 * t - 4) / (pow(x, 2) - pow(y, 2)));
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  double x, y, t;
  x = stod(argv[1]); // Valor de x
  y = stod(argv[2]); // Valor de y
  t = stod(argv[3]); // Valor de t
  cout << Fuction(x, y, t) << endl;
  return 0;
}