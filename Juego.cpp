#include "Juego.h"

Juego::Juego() {
	jugador1 = new Jugador("Luis");
	jugador2 = new Jugador("Ana");
}

Juego::~Juego() {
	cout<<"\nSe destruye el juego ...\n";
	delete jugador1;
	delete jugador2;
}

void Juego::jugar(){
	jugador1->jugar(dado1,dado2);
	jugador2->jugar(dado1,dado2);
}

string Juego::ganador(){
	if(jugador1->obtenerPuntos() > jugador2->obtenerPuntos())
		return jugador1->obtenerNombre();
	
	else if (jugador1->obtenerPuntos() == jugador2->obtenerPuntos())
		return "Es un empate !!!";
	else
		return jugador2->obtenerNombre();
}
