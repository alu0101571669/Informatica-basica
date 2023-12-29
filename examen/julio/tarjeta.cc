#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void EliminarEspacios(string& cadena) {
  string cadena_sin_espacios;
  for (char digito : cadena) {
    if (!isspace(digito)) {
      cadena_sin_espacios += digito;
    }
  }
  cadena = cadena_sin_espacios;
}

bool SumarDigitos(int tarjeta[16]) {
  int sumar_digitos = 0;
  for (int it = 0; it < 15; it++) {
    sumar_digitos += tarjeta[it];
  }
  if (sumar_digitos % 10 == 0) {
    return true;
  }
  return false;
}

bool EsValida(int tarjeta[16]) {
  for (int it = 15; it > 0; it--) {
    // Iterar sobre las posiciones impares a partir de la derecha
    if (it % 2 != 0) {
      continue;
    }
    int numero = tarjeta[it];
    if (numero * 2 > 9) {
      int suma_de_digitos = 0;
      while (numero != 0) {
        int digito = numero % 10;
        suma_de_digitos += digito;
        numero /= 10; // Siguiente digito
      }
      tarjeta[it] = suma_de_digitos;
    }
    else {
      tarjeta[it] = numero;
    }
  }
  if (SumarDigitos(tarjeta)) {
    return true;
  }
  return false;
}

int main() {
  string cadena;
  int tarjeta[16], iterador{0};
  getline(cin, cadena);
  EliminarEspacios(cadena);
  if (cadena.length() <= 1) {
    cout << "Cadena inválida" << endl;
    exit(EXIT_FAILURE);
  }

  // Creo el array de enteros
  for (auto it = cadena.begin(); it != cadena.end(); it++) {
    int digito = stoi(string(1, *it));
    tarjeta[iterador] = digito;
    iterador++;
  }

  // Comprobar la tarjeta
  if (EsValida(tarjeta)) {
    cout << "Tarjeta válida" << endl;
  }
  else {
    cout << "Tarjeta no válida" << endl;
  }
  return 0;
}