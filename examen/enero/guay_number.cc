#include <iostream>
#include <vector>

using namespace std;

int main() {
  int numero, save_numero, suma{0};
  vector<int> vector_numeros;
  cin >> numero;
  save_numero = numero;
  while (numero != 0) {
    int digito = numero % 10;
    vector_numeros.push_back(digito);
    numero /= 10;
  }

  // Recorro el vector de digitos
  for (auto it = vector_numeros.rbegin(); it != vector_numeros.rend(); it+=2) { // Iterar sobre las posiciones impares
    suma += *it;
  }

  // Comprobar si la suma es par
  if (suma % 2 == 0) {
    cout << save_numero << " es GUAY" << endl;
  }
  else {
    cout << save_numero << "no es GUAY" << endl;
  }
  return 0;
}