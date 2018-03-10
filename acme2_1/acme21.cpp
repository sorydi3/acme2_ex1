// acme21.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include "Empleat.h"
using namespace std;

int main() {
	cout << "ENTRA	ELS	EMPLEATS	(CODI:0	PER	ACABAR)" << endl;
	unsigned countador = 0;
	Empleat empl;
	bool continuar = empl.llegir();
	Empleat mesJove = empl;
	while (continuar) {
		countador++;
		if (empl.esMesJove(mesJove))
			mesJove = empl;
		continuar = empl.llegir();
	}
	cout << "HI	HA " << countador << " EMPLEATS" << endl;
	cout << "EL	MES	JOVE ES: " << endl;
	mesJove.mostrar();
	return 0;
}