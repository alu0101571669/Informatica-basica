#include <iostream>
#include <cmath>
using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file floating_point_arithmetics.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/11/2023
  * @brief Programa que indica si 2 números decimales son iguales
*/

/**
 * @brief Funcíon que comprueba que se han introducido los argumentos correctos
 * @param argc Número de parametros
*/

void ChekCorrectParameters(int argc) {
  if (argc != 3) {
    cout << "Se deben de introducir dos números separados por un espacio." << endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * @brief Función que muestra el funcionamiento del programa
*/

void PrintProgramPurpose() {
  cout << "Programa que indica si dos número decimales son iguales" << endl;
}

/**
 * @brief Función que comprueba si 2 números son iguales
 * @param number1 Primer número
 * @param number2 Segundo número
 * @param epsilon Valor de epsilon
 * @return 1 en caso de verdadero y 0 en caso contrario
*/

bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7) {
  return abs(number1 - number2) < epsilon;
}

int main(int argc, char* argv[]) {
  ChekCorrectParameters(argc);
  PrintProgramPurpose();
  double number1, number2;
  number1 = stod(argv[1]); // Número 1
  number2 = stod(argv[2]); // Número 2
  cout << (AreEqual(number1, number2, 1e-7) ? "True" : "False") << endl;
  return 0;
}