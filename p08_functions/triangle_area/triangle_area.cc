#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file triangle_area.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/11/2023
  * @brief Programa que comprueba si los lados de un triángulo que se introducen forman un triángulo válido, y si es así calcular su área según la fórmula de Herón
*/

/**
 * @brief Funcíon que comprueba que se han introducido los argumentos correctos
 * @param argc Número de parametros
*/

void ChekCorrectParameters(int argc) {
  if (argc != 4) {
    cout << "Se deben de introducir 3 valores: a, b y c para los respectivos lados del triángulo" << endl;
    exit(EXIT_SUCCESS);
  }
}

void PrintProgramPurpose() {
  cout << "Programa que según los lados que se introduzcan, indica si es un triángulo valido." << endl; 
}

/**
 * @brief Función que comprueba los lados de un triángulo para saber si este es válido
 * @param lado1 Lado 1 del triángulo 
 * @param lado2 Lado 2 del triángulo
 * @param lado3 Lado 3 del triángulo
 * @return 1 si no cumple la igualdad y 0 en caso contrario
*/

bool IsAValidTriangle(double lado1, double lado2, double lado3) {
  if (lado1 > (lado2 + lado3)) {
    return false;
  }
  return true;
}

/**
 * @brief Calcula el área del triángulo según la fórmula de Herón
 * @param lado1 Lado 1 del triángulo 
 * @param lado2 Lado 2 del triángulo
 * @param lado3 Lado 3 del triángulo
 * @return área del triángulo
*/

double Area(double lado1, double lado2, double lado3) {
  double p = (lado1 + lado2 + lado3) / 2;
  return sqrt(p * (p - lado1) * (p - lado2) * (p - lado3));
}

int main(int argc, char* argv[]) {
  ChekCorrectParameters(argc);
  PrintProgramPurpose();
  double lado1, lado2, lado3;
  lado1 = stod(argv[1]);
  lado2 = stod(argv[2]);
  lado3 = stod(argv[3]);
  if (IsAValidTriangle(lado1, lado2, lado3) && IsAValidTriangle(lado2, lado1, lado3) && IsAValidTriangle(lado3, lado1, lado2)) {
    cout << fixed << setprecision(2) << Area(lado1, lado2, lado3) << endl;
  }
  else {
    cout << "Not a valid triangle" << endl;
  }
  return 0;
}