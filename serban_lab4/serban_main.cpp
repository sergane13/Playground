#include <iostream>
#include "Autoturism.h"

using namespace std;
int Autoturism::nr_de_autoturisme = 0;


int main()
{
	int n;
	cout << "Cate masini doresti: ";
	cin >> n;

	Autoturism* v = new Autoturism[n];

	citire(n, v);
	afisare_all(n, v);
	identificare_masina_noua(n, v);

	delete[] v;
	return 0;

}