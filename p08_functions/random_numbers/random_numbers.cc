#include <iostream>
#include <ctime>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file random_number.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/11/2023
  * @brief Programa que muestra un núemro aleatorio perteneciente a un intervalo
*/

/**
 * @brief Muestra que función hace el programa
*/

void PrintProgramPurpose() {
  cout << "Muestra por pantalla un número aleatorio entre los intervalos n y m introducidos anteriomente" << endl;
}

/**
 * @brief Funcíon que comprueba que se han introducido los argumentos correctos
 * @param argc Número de parametros
*/

void ChekCorrectParameters(int argc) {
  if (argc != 3) {
    cout << "Se deben de introducir valores para n y m." << endl;
    exit(EXIT_SUCCESS);
  }
}

double RandomNumber(int n, int m) {
  srand(time(nullptr));
  int numero_random = rand();
  return n + (static_cast<double>(numero_random) / RAND_MAX * (m - n));
}

int main(int argc, char* argv[]) {
  ChekCorrectParameters(argc);
  PrintProgramPurpose();
  int n, m;
  n = stoi(argv[1]); // Número n
  m = stoi(argv[2]); // Número m
  if (n > m) {
    cout << "Error: n debe de ser menor que m" << endl;
  }
  else {
    cout << RandomNumber(n, m) << endl;
  }
  return 0;
}