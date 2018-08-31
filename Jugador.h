#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
using namespace std;

#include "Dado.h"

class Jugador {
public:
	Jugador(string);
	~Jugador();
	
	string obtenerNombre();
	int obtenerPuntos();
	int obtenerVictorias();
	
	void incrementarVictorias();
	void jugar(Dado&, Dado&);
	
private:
	string nombre;
	int puntosObtenidos;
	int victorias;
};

#endif

