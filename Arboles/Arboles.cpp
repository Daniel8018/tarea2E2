

#include <iostream>
#include "nodo.h"

using namespace std;

void callMenuTree();


Nodo* arbolPrincipal = NULL;


void showTreeInorden(Nodo* aux) {

	if (aux) {

		showTreeInorden(aux->getIzquierdo());

		cout << aux->getDato() << " ";

		showTreeInorden(aux->getDerecho());

	}

}


void showTreePreorden(Nodo* aux) {

	if (aux) {

		cout << aux->getDato() << " ";

		showTreePreorden(aux->getIzquierdo());

		showTreePreorden(aux->getDerecho());

	}

}


void showTreePostorden(Nodo* aux) {

	if (aux) {

		showTreePostorden(aux->getIzquierdo());

		showTreePostorden(aux->getDerecho());

		cout << aux->getDato() << " ";

	}

}


void showTree(Nodo* node) {
	int option;

	do {

		cout << endl << endl << "Seleccione como desea mostrar el arbol: " << endl;

		cout << "1 - Inorden." << endl;

		cout << "2 - Preorden." << endl;

		cout << "3 - Postorden." << endl;

		cout << "Seleccione: ";

		cout << endl;

		cin >> option;

	} while (option < 1 || option > 3);

	switch (option) {

	case 1:

		cout << endl << endl << "ARBOL MOSTRADO EN INORDEN" << endl;

		showTreeInorden(arbolPrincipal);

		cout << endl << endl;

		break;



	case 2:

		cout << endl << endl << "ARBOL MOSTRADO EN PREORDEN" << endl;

		showTreePreorden(arbolPrincipal);

		cout << endl << endl;

		break;



	case 3:

		cout << endl << endl << "ARBOL MOSTRADO EN POSTORDEN" << endl;

		showTreePostorden(arbolPrincipal);

		cout << endl << endl;

		break;

	}



}

void insertNodeTree(int number, bool mostrar = true) {
	//arbol principal: es el arbol
	Nodo* node = new Nodo[1];
	node->setDato(number);
	node->setIzquierdo(NULL);
	node->setDerecho(NULL);

	if (arbolPrincipal == NULL) arbolPrincipal = node;
	else {

		Nodo* aux = arbolPrincipal;
		Nodo* prev;

		prev = aux;

		while (aux) {
			prev = aux;

			if (number < aux->getDato()) aux = aux->getIzquierdo();
			else aux = aux->getDerecho();
		}

		if (number < prev->getDato()) {
			prev->setIzquierdo(node);
		}
		else {
			prev->setDerecho(node);
		}


		if (mostrar == true) {
			showTree(arbolPrincipal);
		}

	}


}

void addNodeTree() {
	int number;
	cout << "Escriba un numero para agregar: ";
	cin >> number;
	insertNodeTree(number);

}



void searchNode() {


}


void createDefaultTree() {
	insertNodeTree(5, false);
	insertNodeTree(4, false);
	insertNodeTree(3, false);
}


void removeNode() {

}


void callMenuTree() {

    int option;

    do {

        cout << endl << endl << "Menu de Arboles:" << endl;

        cout << "1 - Mostrar arbol (seleccionar)." << endl;

        cout << "2 - Agregar Nodo." << endl;

        cout << "3 - Buscar Nodo." << endl;

        cout << "4 - Crear arbol por defecto." << endl;

        cout << "5 - Borrar Nodo." << endl;

        cout << "6 - Salir." << endl;

        cout << "Digite la opcion: ";

        cin >> option;

    } while (option < 1 || option > 6);


    
  

    switch (option) {

    case 1: 
        showTree(arbolPrincipal);
        callMenuTree();
            break;

    case 2: addNodeTree();
            callMenuTree();
        break;

    case 3: searchNode();
            callMenuTree();
        break;

    case 4: createDefaultTree();
            callMenuTree();
        break;

    case 5: removeNode();
           callMenuTree();
        break;

    case 6: break;

    }

}


int main()
{
    callMenuTree();
}
