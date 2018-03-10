#pragma once
#include "Data.h"
#include <string>
#include<iostream>
using namespace std;

class Empleat{
//	Descripció:	guarda	la	informació	d’un	empleat	(nom,	cognom,	població	i	data	de	naixement)	
public:
	static const int CODI_FI = 0;
	//	CONSTRUCTORS	
	//	CONSTRUCTORS	
	Empleat();
	//	Pre:--;	Post:	té	codi=0,	nom,	cognom	i	poblacio	en	blanc,	i	la	data	de	naix.	per	defecte	
	//	CONSULTORS	
	void mostrar() const;
	//Pre:	--;	Post:	mostra	la	informació	del	treballador	actual	
	bool esMesJove(Empleat e) const;
	//Pre:	--;	Post;	cert	si	e	és	més	jove	l’empleat	actual	
	//	MODIFICADORS
	bool llegir(); //	alternaZva:	es	podria	posar	un	llegir	acció	i	un	esDarrer()	consultor	
				   //Pre:	--;	Post:	llegeix	un	emplear	i	retorna	cert	si	s’ha	llegit	un	empleat	(fals	si	el	codi	és	0)
private:
	int a_codi;
	string a_nom;
	string a_cognom;
	string a_poblacio;
	Data a_dNaixement;
};

