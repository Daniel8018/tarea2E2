#pragma once

class Nodo{

	
private:
	Nodo* Izquierdo;
	int dato;
	Nodo* Derecho;

public:
	Nodo();
	Nodo(int);
	int getDato();
	void setDato(int);
	Nodo* getDerecho();
	void setDerecho(Nodo*);
	Nodo* getIzquierdo();
	void setIzquierdo(Nodo*);
};