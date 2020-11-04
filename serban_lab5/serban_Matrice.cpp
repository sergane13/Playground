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


Matrice Matrice::operator-(Matrice a)
{
	Matrice temp(a.nrL, a.nrC);

	if ((nrL == a.nrL) && (nrC == a.nrC))
	{
		for (int i = 0; i < nrL; i++)
		{
			for (int j = 0; j < nrC; j++)
			{
				temp.elemente[i][j] = elemente[i][j] - a.elemente[i][j];
			}
		}
	}
	else
	{
		std::cout << "Nu au aceasi dimensiune matricele\n";
	}
	return temp;
}


Matrice Matrice::operator*(Matrice a)
{
	Matrice temp(a.nrL, a.nrC);

	if ((nrL == a.nrL) && (nrC == a.nrC))
	{
		for (int i = 0; i < nrL; i++)
		{
			for (int j = 0; j < nrC; j++)
			{
				temp.elemente[i][j] = 0;
				for (int k = 0; k < nrC; k++)
				{
					temp.elemente[i][j] += elemente[i][k] * a.elemente[k][j];
				}
			}
		}
	}
	else
	{
		std::cout << "Nu au aceasi dimensiune matricele\n";
	}
	return temp;
}


bool Matrice::operator==(Matrice a)
{
	if ((nrL == a.nrL) && (nrC == a.nrC))
	{
		for (int i = 0; i < nrL; i++)
		{
			for (int j = 0; j < nrC; j++)
			{
				if (elemente[i][j] != a.elemente[i][j])
				{
					std::cout << "Matricile nu sunt egale\n";
					return false;
					break;
				}
			}
		}
		std::cout << "Matricile sunt egale\n";
	}
	else
	{
		std::cout << "Nu au aceasi dimensiune matricele\n";
	}
	return true;
}


Matrice Matrice::operator+(int  a)
 {
	Matrice temp(nrL, nrC);

	for (int i = 0; i < nrL; i++)
	{
		for (int j = 0; j < nrC; j++)
		{
			temp.elemente[i][j] = elemente[i][j] + a;
		}
	}
	return temp;
 }


Matrice Matrice::operator=(Matrice a)
{
	if ((nrL == a.nrL) && (nrC == a.nrC))
	{
		for (int i = 0; i < nrL; i++)
		{
			for (int j = 0; j < nrC; j++)
			{
				std::swap(elemente[i][j], a.elemente[i][j]);
			}
		}
	}
	else
	{
		std::cout << "Nu au aceasi dimensiune matricele\n";
	}
	return *this;
}


Matrice Matrice::operator++(int)
{
	Matrice temp = *this;

	if (nrL == nrC)
	{
		for (int i = 0; i < nrL; i++)
		{
			elemente[i][i]++;
		}
	}
	else
	{
		std::cout << "Matricea nu e patratica\n";
	}
	return temp;
}


Matrice Matrice::operator++()
{
	if (nrL == nrC)
	{
		for (int i = 0; i < nrL; i++)
		{
			elemente[i][i]++;
		}
	}
	else
	{
		std::cout << "Matricea nu e patratica\n";
	}
	return *this;
}


Matrice Matrice::operator~()
{
	std::swap(nrL, nrC);
	for (int i = 0; i < nrL; i++)
	{
		for(int j = 0; j < nrC; j++)
		{
			std::swap(elemente[i][j], elemente[j][i]);
		}
	}
	return *this;
}


int Matrice::operator[](const int &index)
{
	return elemente[index/nrC][index%nrL];
}


/*
Matrice Matrice::operator+()
{
	Matrice temp(nrL, nrC);

	for (int i = 0; i < nrL; i++)
	{
		for (int j = 0; j < nrC; j++)
		{
			temp.elemente[i][j] = elemente[i][j] ;
		}
	}
	return temp;
}
*/


