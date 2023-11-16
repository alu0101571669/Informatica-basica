#include "vector.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file vector.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 15/11/2023
  * @brief Implementación de las funciones del programa
*/

/**
 * @brief Función para generar un vector con elementos aleatorios dentro de un intervalo
 * @param size Tamaño del vector
 * @param lower Intervalo inferior del vector
 * @param upper Intervalo superior del vector
 * @return Vector generado
*/

vector<double> GenerateVector(const int size, const double lower, const double upper) {
  vector<double> vector;
  for (int i = 0; i < size; i++) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> distribution(lower, upper);

    // Generar un número aleatorio dentro del rango e insertar dicho número en el vector
    double rand_number = distribution(gen);
    vector.push_back(rand_number);
  }
  return vector;
}

/**
 * @brief Sumar los elementos de un vector
 * @param vector Vector a calcular la suma de sus elementos
 * @return Suma de los elementos del vector 
*/

double GenerateSum(vector<double>& vector) {
  double suma{0};
  for (double elemento : vector) {
    suma += elemento;
  }
  return suma;
}

/**
 * @brief Calcular el máximo, mínimo y promedio de los elementos de un vector
 * @param vector Vector
 * @param maximo Valor donde se va a almacenar el máximo
 * @param minimo Valor donde se va a almacenar el mínimo
 * @param promedio Valor donde se va a almacenar el promedio 
*/

void CalcularDatos(vector<double>& vector, double& maximo, double& minimo, double& promedio) {
  maximo = vector[0];
  minimo = vector[0];
  promedio = vector[0];
  for (int i = 0; i < vector.size(); i++) {
    if (vector[i] > maximo) {
      maximo = vector[i];
    }
    if (vector[i] < minimo) {
      minimo = vector[i];
    }
    promedio += vector[i];
  }
  promedio /= vector.size();
}