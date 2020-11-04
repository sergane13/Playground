#include <iostream>
#include <string>
#include "Autoturism.h"
using namespace std;


Autoturism::Autoturism()
{
	cout << "Sa creat autoturismul inplicit\n";
	culoare = new char[5];
	if (culoare == NULL)
	{
		cout << "Nu pot aloca memorie";
		exit(1);
	}
	
	an_fabricatie = 0;
	nr_de_autoturisme++;
}


Autoturism::Autoturism(const char* cul, unsigned int an) 
{
	cout << "Sa creat autoturismul cu parametri\n";
	culoare = new char[strlen(cul) + 1];
	if (culoare == NULL)
	{
		cout << "Nu pot aloca memorie";
		exit(1);
	}
	strcpy_s(culoare, strlen(cul) + 1, cul);
	an_fabricatie = an;
	nr_de_autoturisme++;
}


Autoturism::Autoturism(Autoturism &a)
{
	culoare = new char[strlen(a.culoare)+1];
	if (culoare == NULL)
	{
		cout << "Nu pot aloca memorie";
		exit(1);
	}
	strcpy_s(culoare, strlen(a.culoare) + 1, a.culoare);
	an_fabricatie = a.an_fabricatie;
	nr_de_autoturisme++;
}


Autoturism::~Autoturism()
{
	delete[] culoare;
}


void Autoturism::afisare()
{
	cout << "Culoarea este " << culoare << " " << "Anul de fabricatie este " << an_fabricatie << "\n";
}

Autoturism Autoturism::schimbare_culoare(const char* cul)
{
	delete[] cul;
	cul = new char[strlen(cul) + 1];
	Autoturism temp (culoare, an_fabricatie);
	strcpy_s(culoare, strlen(cul) + 1, cul);
	return temp;
}

void Autoturism::comparare_automobile(Autoturism a)
{
	if (a.an_fabricatie > an_fabricatie)
	{
		cout << "Autoturismul de culoare " << a.culoare << " este mai batran decat autoturismul " << culoare <<"\n";
	}
	else
	{
		cout << "Autoturismul de culoare " << culoare << " este mai batran decat autoturismul " << a.culoare <<"\n";
	}
	// mai trebuia sa pun si cazul cand ==
}