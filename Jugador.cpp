#include "Jugador.h"

Jugador::Jugador(string nombre){
	this->nombre=nombre;
	victorias=0;
	puntosObtenidos=0; 
		//    cout << "jugador::jugador(string)" << endl;
	}

Jugador::~Jugador() {
	//    cout << "jugador::~jugador()" << endl;
}

string Jugador::obtenerNombre() {
	return nombre;
}

int Jugador::obtenerVictorias() {
	return victorias;
}

int Jugador::obtenerPuntos() {
	return puntosObtenidos;
}

void Jugador::incrementarVictorias() {
	victorias++;
}

void Jugador::jugar(Dado& dado1, Dado& dado2) {
	cout << obtenerNombre();
	cout << " lanza los dados.." << endl;
	
	dado1.lanzar();
	dado2.lanzar();
	puntosObtenidos = dado1.obtenerPuntos()+dado2.obtenerPuntos();
	
	cout << obtenerNombre();
	cout << " obtiene ";
	cout << obtenerPuntos() << " puntos.." << endl;
}
