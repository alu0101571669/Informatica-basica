#include <iostream>
#include <vector>

using namespace std;

int main() {
  int numero, copia_numero, suma{0};
  vector<int> vector_numbers;
  cin >> numero;
  copia_numero = numero;
  // Almaceno los digitos del número en un vector 
  while (copia_numero != 0) {
    int digito = copia_numero % 10;
    vector_numbers.push_back(digito);
    copia_numero /= 10;
  }

  // Recorro el vector de números por la derecha y sumo las posiciones impares
  for (auto it = vector_numbers.rbegin(); it != vector_numbers.rend(); it+=2) {
    suma += *it;
  }

  if (suma % 2 == 0) {
    cout << numero << " es GUAY" << endl;
  }
  else {
    cout << numero << " no es GUAY" << endl;
  }

  return 0;
}