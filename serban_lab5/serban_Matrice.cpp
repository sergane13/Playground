#include <iostream>
#include "serban_Matrice.h"


Matrice::Matrice(int linii, int coloane)
{
	std::cout << "Sa creat o matrice\n";
	nrL = linii;
	nrC = coloane;
	elemente = new int*[nrL];
	for (int i = 0; i < nrL; i++)
	{
		elemente[i] = new int[nrC];
	}
}


Matrice::Matrice(const Matrice& copy)
{
	nrL = copy.nrL;
	nrC = copy.nrC;
	elemente = new int* [nrL];
	for (int i = 0; i < nrL; i++)
	{
		elemente[i] = new int[nrC];
	}

	for (int i = 0; i < nrL; i++)
	{
		for (int j = 0; j < nrC; j++)
		{
			elemente[i][j] = copy.elemente[i][j];
		}
	}
}


void Matrice::Citire_Matrice()
{
	for (int i = 0; i < nrL; i++) 
	{
		for (int j = 0; j < nrC; j++)
		{
			std::cout << "Introdu linia " << i + 1 << " si coloana " << j + 1 <<"\n";
			std::cin >> elemente[i][j];
		}
	}
}


void Matrice::Afisare_Matrice()
{
	for (int i = 0; i < nrL; i++)
	{
		for (int j = 0; j < nrC; j++)
		{
			std::cout << elemente[i][j] << " ";
		}
		std::cout << "\n";
	}


}


Matrice::~Matrice()
{
	std::cout << "Sa apelat destructorul\n";
	for (int i = 0; i < nrL; i++)
	{
		delete[] elemente[i];
	}
	delete[] elemente;
}


Matrice Matrice::operator+(Matrice a)
{
	Matrice temp(a.nrL, a.nrC);
	
	if ((nrL == a.nrL) && (nrC == a.nrC))
	{

		for (int i = 0; i < nrL; i++)
		{
			for (int j = 0; j < nrC; j++)
			{
				temp.elemente[i][j] = elemente[i][j] + a.elemente[i][j];
			}
		}
	}
	else
	{
		std::cout << "Nu au aceasi dimensiune matricele\n";
	}
	return temp;
}


Matrice Matrice::operator=(Matrice a)
{
	Matrice temp(a.nrL, a.nrC);

	if ((nrL == a.nrL) && (nrC == a.nrC))
	{

		for (int i = 0; i < nrL; i++)
		{
			for (int j = 0; j < nrC; j++)
			{
				 temp.elemente[i][j] = a.elemente[i][j];
			}
		}
	}
	else
	{
		std::cout << "Nu au aceasi dimensiune matricele\n";
	}
	return temp;
}