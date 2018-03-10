#pragma once
#include "Data.h"
#include <string>
#include<iostream>
using namespace std;

class Empleat{
//	Descripci�:	guarda	la	informaci�	d�un	empleat	(nom,	cognom,	poblaci�	i	data	de	naixement)	
public:
	static const int CODI_FI = 0;
	//	CONSTRUCTORS	
	//	CONSTRUCTORS	
	Empleat();
	//	Pre:--;	Post:	t�	codi=0,	nom,	cognom	i	poblacio	en	blanc,	i	la	data	de	naix.	per	defecte	
	//	CONSULTORS	
	void mostrar() const;
	//Pre:	--;	Post:	mostra	la	informaci�	del	treballador	actual	
	bool esMesJove(Empleat e) const;
	//Pre:	--;	Post;	cert	si	e	�s	m�s	jove	l�empleat	actual	
	//	MODIFICADORS
	bool llegir(); //	alternaZva:	es	podria	posar	un	llegir	acci�	i	un	esDarrer()	consultor	
				   //Pre:	--;	Post:	llegeix	un	emplear	i	retorna	cert	si	s�ha	llegit	un	empleat	(fals	si	el	codi	�s	0)
private:
	int a_codi;
	string a_nom;
	string a_cognom;
	string a_poblacio;
	Data a_dNaixement;
};

