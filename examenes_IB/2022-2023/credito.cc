/**
 * Universidad de La Laguna
 * Escuela superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * @author Franco Alla
 * * @correo alu0101571669@ull.edu.es
 * @date 03/06/2024
 * @brief Programa que calcula si una tarjeta de crédito es válida o no
*/

#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Comprobar que la cadena introducida sea valida
 * @param cadena Cadena de caracteres
 * @return true si la cadena es valida, false en caso contrario
*/

bool EsValida(const string& cadena) {
  if (cadena.size() < 2) {
    return false;
  }
  for (auto digito : cadena) {
    if (!isdigit(digito)) {
      return false;
    }
  }
  return true;
}

/**
 * @brief Sumar los digitos de una tarjeta
 * @param tarjeta Tarjeta de la que se quieren sumar los digitos
 * @return Suma de los digitos de la tarjeta
*/

int SumaDigitos(const vector<int>& tarjeta) {
  int suma = 0;
  for (int i = 0; i < tarjeta.size(); i++) {
    suma += tarjeta[i];
  }
  return suma;
}

/**
 * @brief Comprobar que la tarjeta sea válida
 * @param tarjeta Tarjeta a comprobar
 * @return true si la tarjeta es válida, false en caso contrario
*/

bool Luhn(vector<int>& tarjeta) {
  int digito, numero, suma = 0;
  for (int i = tarjeta.size() - 2; i >= 0; i -= 2) {
    tarjeta[i] *= 2;
    if (tarjeta[i] > 9) {
      numero = tarjeta[i];
      while (numero > 0) {
        digito = numero % 10;
        suma += digito;
        numero /= 10;
      }
      tarjeta[i] = suma;
    }
    suma = 0;
  }
  suma = SumaDigitos(tarjeta);
  if (suma % 10 == 0) {
    return true;
  }
  else {
    return false;
  }
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Uso: " << argv[0] << " <numero de tarjeta de credito>" << endl;
    return 1;
  }

  string credict_card = string(argv[1]);
  if (!EsValida(credict_card)) {
    cout << "El núemro de tarjeta de crédito no es válido" << endl;
    return 1;
  }
  vector<int> digits;
  for (auto digito : credict_card) {
    digits.push_back(digito - '0');
  }
  if (Luhn(digits)) {
    cout << "La tarjeta de crédito es válida" << endl;
  }
  else {
    cout << "La tarjeta de crédito no es válida" << endl;
  }
  return 0;
}