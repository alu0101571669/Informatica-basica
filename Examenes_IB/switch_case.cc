#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  string palabra = argv[1];
  for (char& letra : palabra) {
    if (islower(letra)) {
      letra = toupper(letra);
    }
    else if (isupper(letra)) {
      letra = tolower(letra);
    }
  }
  cout << palabra << endl;
  return 0;
}