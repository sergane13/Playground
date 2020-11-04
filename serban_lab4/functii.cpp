#include <iostream>
#include "Autoturism.h"
using namespace std;


void citire(int n, Autoturism v[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Introdu autoturismul nr " << i+1 << "\n";
		cout << "Culoarea acestuia este: ";
		cin >> v[i].culoare;
		cout << "Anul de fabricatie a acestuia este: ";
		cin >> v[i].an_fabricatie;
		cout << "\n";
	}
}


void afisare_all(int n, Autoturism v[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Culoarea masinii " << i+1 << " este ";
		cout << v[i].culoare << "\n";
		cout << "Anul de fabricatie a acesteia este: ";
		cout << v[i].an_fabricatie << "\n";
	}
}


void identificare_masina_noua(int n, Autoturism v[])
{	
	int temp = v[0].an_fabricatie;
	char* color = new char[20];
	for (int i = 1; i < n; i++)
	{
		if (v[i].an_fabricatie > temp)
		{
			temp = v[i].an_fabricatie;
			color = v[i].culoare;
		}
	}
	cout << "Masina de culoare " <<  color << " este cea mai noua";
}