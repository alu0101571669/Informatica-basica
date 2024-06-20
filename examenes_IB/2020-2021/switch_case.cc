/**
 * Universidad de la Laguna
 * @brief Programa que cambia los carácteres de una cadena de minúscula a mayúscula y viceversa
 * @date 31/05/2024
 * @author Franco Alla
 * @correo alu0101571669@ull.edu.es
*/

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Función que cambia las letras de una cadena de mayúscula a minúscula y viceversa
 * @param cadena Cadena a modificar
 * @return Cadena modificada
*/

string Switch(string cadena) {
  string cadena_modificada = "";
  for (auto letra : cadena) {
    if (islower(letra)) {
      letra = toupper(letra);
    }
    else {
      letra = tolower(letra);
    }
    cadena_modificada += letra;
  }
  return cadena_modificada;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Uso: " << argv[0] << " <cadena>" << endl;
    return 1;
  }
  string cadena = string(argv[1]);
  cout << Switch(cadena) << endl;
  return 0;
}