#include "nodo.h"
#include <iostream>
Nodo::Nodo() {
this->dato = NULL;
this->Derecho = NULL;
this->Izquierdo = NULL;
}
	

Nodo::Nodo(int dato) {
	this->dato = dato;
}

int Nodo::getDato() {
	return this->dato;
}

void Nodo::setDato(int pDato) {
	this->dato = pDato;
}

void Nodo::setDerecho(Nodo* pDerecho) {
	this->Derecho = pDerecho;
}

void Nodo::setIzquierdo(Nodo* pIzquierdo) {
	this->Izquierdo = pIzquierdo;
}

Nodo* Nodo::getDerecho() {
	return this->Derecho;
}

Nodo* Nodo::getIzquierdo() {
	return this->Izquierdo;
}