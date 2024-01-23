#include "box.h"
#include <vector>


int main() {
  Box caja_1, caja_2;
  cin >> caja_1;
  cin >> caja_2;
  cout << "=== Información de la caja 1 ===" << endl;
  cout << caja_1;
  cout << "=== Información de la caja 2 ===" << endl;
  cout << caja_2;
  if (caja_1 == caja_2) {
    cout << "Las cajas son iguales" << endl;
  }
  else {
    cout << "Las cajas no son iguales" << endl;
  }
  return 0;
  


}