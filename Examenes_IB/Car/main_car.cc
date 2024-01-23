#include "car.h"

int main() {
  Car coche_1, coche_2;
  cout << "=== DATOS DEL COCHE 1 ===" <<  endl;
  cin >> coche_1;
  cout << "=== DATOS DEL COCHE 2 ===" << endl;
  cin >> coche_2;
  if (coche_1 >= coche_2) {
    cout << coche_1.model() << " está antes en el listado de kilometraje" << endl;
  }
  else {
    cout << coche_2.model() << " está antes en el listado de kilometraje" << endl;
  }
  return 0;
}