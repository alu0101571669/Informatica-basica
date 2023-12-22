#include "box.h"

int main() {
  Box caja1, caja2;
  cout << "Introducir los datos de la primera caja" << endl;
  cin >> caja1;
  cout << "Introducir los datos de la segunda caja" << endl;
  cin >> caja2;

  // Información de las cajas
  cout << "Datos introducidos para la primera caja" << endl;
  cout << caja1;
  cout << "Datos introducidos para la segunda caja" << endl;
  cout << caja2;

  if (caja1 == caja2) {
    cout << "Las dos cajas son iguales." << endl;
  }
  else {
    cout << "Las cajas no son iguales" << endl;
  }
  return 0;
}