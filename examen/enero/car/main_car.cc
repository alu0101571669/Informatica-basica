#include "car.h"

int main() {
  Car coche1, coche2;
  cin >> coche1;
  cin >> coche2;
  cout << "=== DATOS DEL COCHE 1 ===" << endl;
  cout << coche1;
  cout << "=== DATOS DEL COCHE 2 ===" << endl;
  cout << coche2;
  if (coche1 < coche2) {
    cout << "El coche 2 se encuentra antes en el listado de kilometraje" << endl;
  }
  else {
    cout << "El coche 1 se encuentra antes en el listado de kilometraje" << endl;
  }
  return 0;
}