#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double longitud;
  cout << "Longitud del lado? ";
  cin >> longitud;
  double area = pow(longitud, 2);
  double perimetro = longitud * 4;
  cout << "El área del cuadrado es " << area << " y su perímetro es "
       << perimetro << endl;
  return 0;
}