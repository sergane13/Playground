#pragma once

class Matrice {

	int nrL, nrC;
	int** elemente;

public:

	Matrice(int linii, int coloane);
	void Citire_Matrice();
	void Afisare_Matrice();
	~Matrice();
	Matrice operator+ (Matrice);
	Matrice operator- (Matrice);
	Matrice operator* (Matrice);
	Matrice operator== (Matrice);
	Matrice operator+ ();
	Matrice operator+ (int);
	Matrice operator~ ();
	Matrice operator++ (int);
	Matrice operator() (int a);

};