#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
  int numero_linea = 0;
  string linea;
  ifstream filein(argv[1]);
  ofstream fileout("Lineas-Arcadio.txt");

  while (getline(filein, linea)) {
    numero_linea++;
    size_t found = linea.find("Arcadio");
    int contador_en_linea = 0;

    while (found != string::npos) { // Verificar que se proporciona una coincidencia
      contador_en_linea++;
      found = linea.find("Arcadio", found + 1);
    }
    // Poner las veces que aparece la palabra Arcadio en la línea
    if (contador_en_linea > 0) {
      fileout << "En la linea " << numero_linea << " del fichero original aparece " << contador_en_linea << " veces la palabra 'Arcadio'" << endl;
    }
  }

  filein.close();
  fileout.close();
}