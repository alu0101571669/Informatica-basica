#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file letters.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 12/10/2023
  * @brief Programa que tranforma letras de mayúscula a minúscula y viceversa
*/

int main() {
  char letra_entrada, letra_salida;
  int conversion;
  cout << "Introducir una letra mayúscula o minúscula: ";
  cin >> letra_entrada;
  conversion = static_cast<int>(letra_entrada); // Pasamos la variable char a un número entero
  if(conversion >= 65 && conversion <= 90) {
    conversion += 32;
    letra_salida = static_cast<char>(conversion); // Pasamos la variable a char según el Código ASCII
  }
  else if(conversion >= 97 && conversion <= 122) {
    conversion -= 32;
    letra_salida = static_cast<char>(conversion); // Pasamos la variable a char según el Código ASCII
  }
  cout << "Entrada Salida" << endl; // Columnas de entrada y salida de las letras
  cout << "   " <<  letra_entrada << "      " << letra_salida << endl;
  return 0;
}