#include <iostream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @rotate.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 5/12/2022
 * @brief Programa que cambia unas vocales por otras de un texto
*/

char CambioDeVocales(char vocal) {   ///Función que cambia las vocales seguún corresponda
    switch (vocal) {
        case 'a': vocal = 'e'; break;
        case 'e': vocal = 'i'; break;
        case 'i': vocal = 'o'; break;
        case 'o': vocal = 'u'; break;
        case 'u': vocal = 'a'; break;
    }
    return vocal;
}

void gestion(char *frase) {   ///Función que llama a otra para realizar los cambios mientras que en la frase no haya ningún espacio inicial
    while(*frase != '\0') {
        *frase = CambioDeVocales(*frase);
        *frase++;
    }
}

int main() {
    char *frase = new char[100];
    std::cout << "Escriba una frase: ";
    std::cin.getline(frase,100);
    gestion(frase);
    std::cout << frase << std::endl;
    return 0;
}