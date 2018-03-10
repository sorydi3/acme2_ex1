//#include "stdafx.h"
#include "Empleat.h"
#include <iostream>
#include<string>
using namespace std;

//CONSTRUCTOR	
Empleat::Empleat() {
	//Pre:	--		
	//Post:	treballador	inicialitzat	(codi,	0;	nom,	cognom,	població,	en	blanc	i	data	per	defecte)		
	a_codi = 0;
	a_nom = a_cognom = a_poblacio = "";
	a_dNaixement = Data();
}


//	MÈTODES	CONSULTORS	
void Empleat::mostrar() const {
//Pre:	--				
//Post:	mostra	la	informació	de	l’empleat	actual	
	cout << "COD  : " << a_codi << endl;
	cout << "NOM  : " << a_nom << endl;
	cout << "COG  : " << a_cognom << endl;
	cout << "POB  : " <<a_poblacio << endl;
	cout << "D.N : "; 
	a_dNaixement.mostrar(2);
}

bool Empleat::esMesJove(Empleat empl) const {
	//Pre:	--		
	//Post:	cert	si	l’empleat	actual	és	més	jove	que	empl,	fals	altrament	
	return empl.a_dNaixement.esMenor(a_dNaixement);
}

//	MÈTODES	MODIFICADORS	
bool Empleat::llegir() {
	//Pre:	--;	Post:	llegeix	un	emplear	i	retorna	cert	si	s’ha	llegit	un	empleat	(fals	si	el	codi	és	CODI_FI,	0)
	cout << "CODI:" << endl;
	cin >> a_codi;
	if (a_codi != CODI_FI) {
		cout << "NOM:" << endl;
		cin >> a_nom;
		cout << "COGNOM:" << endl;
		cin >> a_cognom;
		cout << "POBLACIO:" << endl;
		cin >> a_poblacio;
		cout << "DATA DE NAIXEMENT (AAAAMMDD):" << endl;
		a_dNaixement.llegir(1);
	}
	return a_codi != CODI_FI;
}