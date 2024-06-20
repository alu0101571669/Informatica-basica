/**
 * Universidad de la Laguna
 * Escuela superior de ingeniería y tecnología
 * Grado en Ingeniería Informatica
 * @brief Programa que calcula si un número es guay o no
 * @date 31/05/2024
 * @author Franco Alla
 * @correo alu0101571669@ull.edu.es
*/

#include <iostream>

using namespace std;

/**
 * @brief Función que calcula si un número es guay o no
 * @param numero Número a calcular
 * @return true si es guay, false si no lo es
*/

bool Guay(int numero) {
  int suma = 0, digito;
  while (numero > 0) {
    digito = numero % 100;
    suma += digito;
    numero /= 100;
  }
  if (suma % 2 == 0) {
    return true;
  }
  else {
    return false;
  }
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Uso: " << argv[0] << " <numero>" << endl;
    return 1;
  }
  int numero = stoi(argv[1]);
  if (Guay(numero)) {
    cout << numero << " es GUAY" << endl;
  }
  else {
    cout << numero << " no es GUAY" << endl;
  }
  return 0;
}