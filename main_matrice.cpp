#include <iostream>
#include "Matrice.h"

using namespace std;

int main()
{
	Matrice a(2,2);
	Matrice b(2,2);
	a.Citire_Matrice();
	b.Citire_Matrice();

	a = a + b;
	a.Afisare_Matrice();


	return 0;
}