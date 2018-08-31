#ifndef JUEGO_H
#define JUEGO_H

#include "Jugador.h"

class Juego {
public:
	Juego();
	~Juego();
	void jugar();
	string ganador();
private:
	Dado dado1;
	Dado dado2;
	
	Jugador *jugador1;
	Jugador *jugador2;
};

#endif

