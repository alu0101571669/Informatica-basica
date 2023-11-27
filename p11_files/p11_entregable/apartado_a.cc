#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
  string palabra;
  int contador;
  ifstream filein(argv[1]);
  while (filein >> palabra) {
    if (palabra == "Buendía") { // Si la palabra coincide con la solicitada, sumar 1 al contador
      contador++;
    }
  }
  // Mostrar por pantalla el número de veces que aparece la palabra
  cout << "Número de veces que aparece la palabra Buendía: " << contador << endl;
  filein.close(); // Cerrar el fichero
  return 0;
}