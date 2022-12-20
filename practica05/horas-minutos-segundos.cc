#include <iostream>

int main() {
int tiempo;
int horas, minutos, segundos;

std::cin >> tiempo;
horas = tiempo / 10000;
minutos = (tiempo % 10000) / 100;
segundos = (tiempo % 10000) % 100;
std::cout << horas << ":" << minutos << ":" << segundos <<
std::endl;
return 0;
}
