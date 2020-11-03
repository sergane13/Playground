#pragma once

class Matrice {

public:

	int nrL, nrC;
	int** elemente;

	Matrice(int linii, int coloane);
	void Citire_Matrice();
	void Afisare_Matrice();
	~Matrice();
	Matrice(const Matrice& copy);
	Matrice operator+ (Matrice);
	Matrice operator= (Matrice);
	Matrice operator- (Matrice);
	Matrice operator* (Matrice);
	Matrice operator== (Matrice);
	Matrice operator+ ();
	Matrice operator+ (int);
	Matrice operator~ ();
	Matrice operator++ (int);
	Matrice operator() (int a);

};