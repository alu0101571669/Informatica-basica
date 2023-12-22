#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Modo de empleo: ./switch_case palabra" << endl;
    return EXIT_FAILURE;
  }
  string palabra = argv[1]; // Obtengo la palabra
  for (auto it = palabra.begin(); it != palabra.end(); it++) { // Recorrer las letras de la palabra
    char& letra = *it;
    if (islower(letra)) {
      letra = toupper(letra);
    }
    else {
      letra = tolower(letra);
    }
  }
  cout << palabra << endl;
  return 0;
}