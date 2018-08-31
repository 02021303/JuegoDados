#include<iostream>
#include<time.h>
using namespace std;


#include "Juego.h"

int main (int argc, char *argv[]) {
	
	srand (time(NULL));
	
	Juego juegoDados;
	juegoDados.jugar();	
	cout<<"El ganador es: "<< juegoDados.ganador();
	
	
	return 0;
}

