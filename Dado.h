#ifndef DADO_H
#define DADO_H

#include <iostream>
#include <cstdlib>
using namespace std;

class Dado {
	
public:
	Dado();
	~Dado();
	
	void lanzar();
	int obtenerPuntos();
	
private:
	int puntos;
};

#endif

