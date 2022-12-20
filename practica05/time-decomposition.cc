#include <iostream>

int main() {
int time;
std::cin >> time;
int horas, minutos, segundos;
segundos = time % 60;
horas = (time / 60) / 60;
minutos = (time / 60) % 60;
std::cout << horas << " " << minutos << " " << segundos << std::endl;
return 0;
}
