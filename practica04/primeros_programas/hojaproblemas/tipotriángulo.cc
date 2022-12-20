#include <iostream>

int main() {
double lado1, lado2, lado3;

std::cout << "Introduzca lado 1 ";
std::cin >> lado1;
std::cout << "Introduzca lado 2 ";
std::cin >> lado2;
std::cout << "Introduzca lado 3 ";
std::cin >> lado3;

if(lado1 > lado2 + lado3 or lado2 > lado1 + lado3 or lado3 > lado1 + lado2)
{
std::cout << "No es un triángulo válido" << std::endl;
}
else
{
std::cout << "El triángulo es";
}

if(lado1 == lado2 == lado3)
{
std::cout << " equilatero" << std::endl;
}
else
{
std::cout << " escaleno" << std::endl;
}

if(lado1 == lado2 or lado1 == lado3 or lado2 == lado3)
{
std::cout << " isósceles" << std::endl;
}
return 0;
}
