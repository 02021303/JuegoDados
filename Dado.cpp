
#include "Dado.h"

Dado::Dado() {
	
}

Dado::~Dado() {
	
}

void Dado::lanzar() {
	puntos = 1 + rand() % 6;
	
	cout << "Se lanzaron los dados y se obtuvieron ";
	cout << obtenerPuntos() << " punto(s).." << endl;
}

int Dado::obtenerPuntos() {
	return puntos;
}

