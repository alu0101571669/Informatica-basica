#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main(int argc, char *argv []) {
  if(argc != 3) {
    cout << "Modo de empleo: ./a.out numbers.txt squares.txt" << endl;
    exit(EXIT_SUCCESS);
  }
  string mis_numeros = argv[1];
  string mi_cuadrado = argv[2];
  ifstream fichero_entrada(mis_numeros);
  ofstream fichero_salida(mi_cuadrado);
  double numeros;
  while(fichero_entrada >> numeros) {
    double cuadrado = pow(numeros, 2);
    fichero_salida << cuadrado << endl;
  }
  //Cerramos los ficheros
  fichero_entrada.close();
  fichero_salida.close();

  return 0;
}