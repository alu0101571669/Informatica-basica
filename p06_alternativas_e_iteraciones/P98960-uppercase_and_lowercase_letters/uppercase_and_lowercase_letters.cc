#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file uppercase_and_lowercase_letters.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 20/10/2023
  * @brief Programa que recibe una letra mayúscula/minúscula y la devuelve inversa
*/

int main() {
  char letra;
  cin >> letra;
  int ascii = static_cast<int>(letra);
  if(ascii >= 65 && ascii <= 90) {
    letra = static_cast<char>(ascii + 32);
  }
  else if(ascii >= 97 && ascii <= 122) {
    letra = static_cast<char>(ascii - 32);
  }
  cout << letra << endl;
  return 0;
}