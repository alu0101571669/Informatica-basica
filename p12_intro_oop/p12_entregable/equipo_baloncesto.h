#include "ayudante.h"
#include "jugador.h"
#include "entrenador.h"
#include <vector>

class Equipo_Baloncesto {
  public:
  Equipo_Baloncesto(string& nombre, string& ciudad, vector<Jugador>& jugadores, vector<Entrenador>& entrenadores, vector<Ayudante>& ayudantes);
  double PesoMedio(vector<Jugador>& jugadores);

  private:
  string nombre_;
  string ciudad_;
  vector<Jugador> jugadores_;
  vector<Entrenador> entrenadores_;
  vector<Ayudante> ayudantes_;
};