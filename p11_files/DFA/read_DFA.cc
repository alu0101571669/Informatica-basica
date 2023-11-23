#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <tuple>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file dfa.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 23/11/2023
  * @brief Programa que muestra por pantalla la información básica de un autómata
*/

/**
 * @brief Función para mostrar las transiciones del autómata
 * @param transiciones Conjunto de transiciones del autómata
*/

void ImprimirTransiciones(multimap<int, tuple<char, int>> transiciones) {
  for (auto it = transiciones.begin(); it != transiciones.end(); it++) {
    cout << "delta(" << it->first << ", " << get<0>(it->second) << ") = " << get<1>(it->second) << endl;
  }
}

/**
 * @brief Función que muestra los estados de aceptación del autómata
 * @param estados_aceptacion Conjunto donde se almacenan los estados de aceptación
*/

void ImprimirEstadosAceptacion(set<int> estados_aceptacion) {
  cout << "F = {";
  for (auto it = estados_aceptacion.begin(); it != estados_aceptacion.end(); it++) {
    cout << *it;
    if (next(it) != estados_aceptacion.end()) {
      cout << ", ";
    }
  }
  cout << "}" << endl;
}

int main(int argc, char* argv[]) {
  // verificar que se han proporcionado todos los argumentos
  if (argc != 2) {
    cout << "Se debe de proporcionar un fichero con la información del autómata a mostrar en pantalla." << endl;
    exit(EXIT_FAILURE);
  }

  // Declaración de las variables
  int num_estados, num_transiciones, inicial, estado, estado_siguiente;
  char caracter;
  bool aceptacion = false;
  multimap<int, tuple<char, int>> transiciones;
  set<int> estados_aceptacion;

  // Leemos el número de estados y el estado inicial
  ifstream file(argv[1]); // Lectura del fichero con los datos
  file >> num_estados; // Leo el número de estados
  file >> inicial; // Leo el estado inicial

  // Mostramos en número de estados y el estado inicial del autómata
  cout << "|Q| = " << num_estados << endl;
  cout << "q0 = " << inicial << endl;

  // Leemos las transiciones de cada estado
  while (num_estados != 0) {
    file >> estado; // Estado
    file >> aceptacion; // Verificar si es de aceptación
    file >> num_transiciones; // Número de transiciones del estado
    if (aceptacion) { // si el estado es de aceptación Insertarlo en el conjunto
      estados_aceptacion.insert(estado);
    }
    while (num_transiciones != 0) {
      file >> caracter >> estado_siguiente;
      transiciones.insert({estado, make_tuple(caracter, estado_siguiente)});
      num_transiciones--;
    }
    num_estados--;
  }
  // Mostramos la información en la terminal
  ImprimirEstadosAceptacion(estados_aceptacion);
  ImprimirTransiciones(transiciones);
  file.close(); // Cerrar el fichero
  return 0;
}