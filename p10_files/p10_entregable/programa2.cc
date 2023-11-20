#include <iostream>
#include <vector>

using namespace std;



int main() {
  int num, digito, suma;
  bool is_sum = false;
  vector<int> secuencia;
  while (cin >> num) {
    // Insertar los elementos al vector
    while (num != 0) {
      cin >> digito;
      secuencia.push_back(digito);
      num--;
    }
    // Comprobar que la suma de los elementos sea igual a un elemento del vector
    for (auto it = secuencia.begin(); it != secuencia.end(); it++) {
      suma = 0;
      digito = *it;
      // Recorremos los otros elementos
      for (auto it2 = next(it); it2 != secuencia.end(); it2++) {
        suma += *it2;
      }
      // Comprobar si la suma de los otros elementos del vector coinciden con el digito, y si es así, parar
      if (digito == suma) {
        is_sum = true;
        break;
      }
      else {
        is_sum = false;
      }
    }
    // Reseteamos el vector
    secuencia.clear();
    cout << ((is_sum) ? "YES" : "NO") << endl;
  }
  return 0;
}