#include <iostream>
#include <string>

using namespace std;

int main() {
  string nombre;
  int edad;
  cout << "Nombre: ";
  cin >> nombre;
  cout << "Edad? ";
  cin >> edad;
  cout << "Hola, eres " << nombre << " y tienes " << edad << " años." << endl;
  
  return 0;
}