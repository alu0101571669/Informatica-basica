/**
 * Universidad de la laguna
 * Escuela superior de ingeniería y tecnología
 * Grado en INgeniería Informatica
 * @brief Programa que calcula la conjetura de Collatz
 * @date 31/05/2024
 * @author Franco Alla
 * @correo alu0101571669@ull.edu.es
*/

#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Función que calcula la conjetura de collatz
 * @param numero Número a calcular
 * @return Suceción de collatz
*/

vector<int> Collatz(int numero) {
  vector<int> sucesion;
  while (numero != 1) {
    if (numero % 2 == 0) {
      sucesion.push_back(numero);
      numero /= 2;
    }
    else {
      sucesion.push_back(numero);
      numero = 3 * numero + 1;
    }
  }
  sucesion.push_back(1); // Añadimos el 1 al final de la sucesión
  return sucesion;
}

/**
 * @brief Función para mostrar por pantalla la sucesión de collatz
 * @param sucesion Sucesión a imprimir
*/

void Print(const vector<int>& sucesion) {
  for (auto numero : sucesion) {
    cout << numero << " ";
  }
  cout << endl;
}

/**
 * @brief Función que calcula el número de secuencias hechas en la sucesión de Collatz
 * @param sucesion Sucesión de Collatz
 * @return Número de secuencias
*/

int Secuencias(const vector<int>& sucesion) {
  return sucesion.size();
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Uso: " << argv[0] << " <numero>" << endl;
    return 1;
  }

  int numero = stoi(argv[1]);
  if (numero <= 0) {
    cout << "El número debe ser positivo y mayor que 0" << endl;
    return 1;
  }

  vector<int> sucesion = Collatz(numero);
  Print(sucesion); // Imprimimos la sucesión
  cout << "Número de secuencias: " << Secuencias(sucesion) << endl;
  return 0;
}