#include <iostream>
#include "ex2_lab6_Header.h"
using namespace std;


int main()
{
	Multime<double> a(3);
	Multime<double> b(3);
	Multime<double> c(3);
	a.citire();
	b.citire();
	c.citire();

	cout << !a <<"\n";
	cout << !b <<"\n";

	c.aduna(a);
	for (int i = 0; i < c.numar_elemente; i++)
	{
		cout << c.vector[i] << "\n";
	}

	return 0;

}