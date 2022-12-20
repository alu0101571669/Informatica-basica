#include <iostream>

int main() {

int horas, minutos, segundos;

std::cin >> horas >> minutos >> segundos;
// 2da opcion y primera
if((segundos == 59) and (minutos < segundos))
{
std::cout << horas << ":" << minutos + 1 << ":" << "00" << std::endl;
}
//3ra opcion 
if((minutos == 59) and (segundos == 59) and (horas < 23))
{
std::cout << horas + 1 << ":" << "00" << ":" << "00" << std::endl;
}
if(horas >= 10 and minutos < 59 and segundos < 59)
{
std::cout << horas << ":" << minutos << ":" << segundos + 1 << std::endl;
}
//4ta y 5ta opcion
if(horas < 10 and minutos < 10 and segundos < 9)
{
std::cout << "0" << horas << ":" << "0" << minutos << ":" << "0" << segundos + 1 << std::endl;
}
if(horas < 10 and minutos < 10 and segundos >= 9)
{
std::cout << "0" << horas << ":" << "0" << minutos << ":" << segundos + 1 << std::endl;
}
if (horas == 23 and segundos == 59 and minutos ==59)
{
std::cout << "00:00:00" << std::endl;
}
if(horas <= 9 and segundos < 9 and minutos >= 10)
{
std::cout << "0" << horas << ":" << minutos << ":" << "0" << segundos + 1 << std::endl;
}
return 0;
}
