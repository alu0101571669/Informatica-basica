#include <iostream>

using namespace std;

int main() {
  int edad;
  const int jubilacion = 65;
  cout << "Edad? ";
  cin >> edad;
  cout << "Te fatan " << jubilacion - edad << " años para jubilarte." << endl;

  return 0;
}