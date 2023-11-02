#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Muestra el funcionamiento del programa
*/

void PrintProgramPurpose() {
  cout << "Programa que cambia las letras mayúsculas/minúsuclas de una palabra." << endl;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  string palabra = argv[1];
  string palabra_cambiada;
  for (char letra : palabra) { // Recorrer la palabra
    if (isupper(letra)) {
      palabra_cambiada += tolower(letra); // Convertir la letra a minúscula
    }
    else {
      palabra_cambiada += toupper(letra); // Convertir la letra a mayúscula
    }
  }
  cout << palabra_cambiada << endl;
  return 0;
}