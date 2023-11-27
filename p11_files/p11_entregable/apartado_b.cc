#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
  string linea;
  string frase;
  ifstream filein(argv[1]);
  ofstream fileout("Ursula-por-Maria.txt");
  while (getline(filein, linea)) {
    size_t found = linea.find("Úrsula");
    while (found != std::string::npos) { // Verificar que se proporciona una coincidencia
      linea.replace(found, 6, "María");  // Reemplaza 6 caracteres por "María"
      found = linea.find("Úrsula", found + 1);
    }
    fileout << linea << endl;
  }
}