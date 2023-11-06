#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa2.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 06/11/2023
  * @brief Programa que divide un tiempo en días, horas, minutos y segundos
*/

/**
 * @brief Función que saca los días, las horas, los minutos y los segundos de un tiempo determinado
 * @param n Tiempo a descomponer
 * @param h Horas
 * @param m Minutos
 * @param s Segundos
*/

void decompose(int n, int& h, int& m, int& s) {
  h = n / 3600; // Calcular las horas
  n %= 3600; // Obtener los segundos que sobran
  m = n / 60; // Calcular minutos
  s = n % 60; // Calcular los segundos
}