#include <iostream>

/*Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file add-one-second.cc
  * @author Franco Alla Prieto alu0101571669@ull.edu.es
  * @date 06/11/2022
  * @brief Programa que insertas 3 numeros y te da el resultado en formato hora digital, esta aumentada en un segundo
*/

int main() {
int h, m , s;
std::cin >> h >> m >> s;
//sumar un segundo
s = s + 1;
if(s == 60) {
s = 0;
m = m + 1;
if(m == 60) {
m = 0;
h = h + 1;
if(h == 24) {
s = 0;
m = 0;
h = 0;
}
}
}

//escribir horas, minutos, segundos si son menores que 10 
if(h < 10) {
std::cout << 0;
}
std::cout << h << ":";

if(m < 10) {
std::cout << 0;
}
std::cout << m << ":";

if(s < 10) {
std::cout << 0;
}
std::cout << s << std::endl;
return 0;
}
