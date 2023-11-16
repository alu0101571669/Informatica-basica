#include <iostream>
#include <random>
#include <vector>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file vector.h
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 15/11/2023
  * @brief Declaración de las funciones del programa
*/

vector<double> GenerateVector(const int size, const double lower, const double upper); // Generar un vector
double GenerateSum(vector<double>&); // Sumar los elementos del vector
void CalcularDatos(vector<double>&, double&, double&, double&); // Calcular el máximo el mínimo y el promedio del vector