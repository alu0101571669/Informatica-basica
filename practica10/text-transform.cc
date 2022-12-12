#include <iostream>
#include <fstream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @AreEqual.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 19/11/2022
 * @brief Programa que cambia las letras por otras de un fichero de texto  
*/

char CambioDeLetras(char letra) {   ///Función que cambia las vocales seguún corresponda
    switch (letra) {
        case 'a': letra = 'b'; break;
        case 'c': letra = 'd'; break;
        case 'e': letra = 'f'; break;
        case 'g': letra = 'h'; break;
        case 'i': letra = 'j'; break;
        case 'k': letra = 'l'; break;
        case 'm': letra = 'n'; break;
        case 'ñ': letra = 'o'; break;
        case 'p': letra = 'q'; break;
        case 'r': letra = 's'; break;
        case 't': letra = 'u'; break;
        case 'v': letra = 'w'; break;
        case 'x': letra = 'y'; break;
        case 'z': letra = 'a'; break;
    }
    return letra;
}

    void ModificarArchivo(char contenido) {
        while(contenido != '0\') {
    }
