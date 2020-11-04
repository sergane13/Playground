#include <iostream>
#include "serban_Matrice.h"

using namespace std;

int main()
{
	Matrice a(2,2);
	Matrice b(2,2);
	bool c;
	a.Citire_Matrice();
	b.Citire_Matrice();

	(a + b).Afisare_Matrice();
	(a - b).Afisare_Matrice();
	(a * b).Afisare_Matrice();
	c = a == b;
	(a + 2).Afisare_Matrice();
	//(2 + a).Afisare_Matrice();
	~a;
	a.Afisare_Matrice();
	a++;
	a.Afisare_Matrice();
	++a;
	a.Afisare_Matrice();
	cout << a[1] << "\n";

	return 0;
}