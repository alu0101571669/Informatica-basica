#include <iostream>

/*
Universidad de la laguna
autor: Franco Alla Prieto
Fecha: 29/10/2022
Finalidad: Programa que te pide el número de huevos y te dice cuantas cajas se pueden llenar
*/
int main() {
int huevos;

std::cout << " Huevos? "; 
std::cin >> huevos;
std::cout << " Con " << huevos << " huevos se pueden llenar " <<
huevos / 6 << " cajas y sobran " << huevos % 6 << " huevos " << std::endl;
return 0;
}
