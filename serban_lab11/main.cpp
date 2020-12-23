#include <vector>
#include <iostream>
#include <algorithm>
#include "Dreptunghi.h"
#include "Cerc.h"
#include "Triunghi.h"



Figura* figCuArieMax(std::vector<Figura*> figuri)
{
	double arieMax = 0;
	Figura* figMax = nullptr;
	for (std::vector<Figura*>::iterator i = figuri.begin(); i != figuri.end(); i++)
	{
		if ((*i)->arie() > arieMax)
		{
			arieMax = (*i)->arie();
			figMax = *i;
		}
	}
	return figMax;
}Figura* figCuPerimetruMax(std::vector<Figura*> figuri)
{
	double perimetruMax = 0;
	Figura* figMax = nullptr;
	for (std::vector<Figura*>::iterator i = figuri.begin(); i != figuri.end(); i++)
	{
		if ((*i)->perimetru() > perimetruMax)
		{
			perimetruMax = (*i)->perimetru();
			figMax = *i;
		}
	}
	return figMax;
}bool rule(Figura* a, Figura* b){	return (*a).arie() > (*b).arie() ? 0 : 1;}
int main()
{
	std::vector<Figura*> figuri;
	Dreptunghi d1(0, 0, 2, 5);
	Dreptunghi d2(0, 0, 2, 2);
	Cerc c1(0, 0, 3);

	figuri.push_back(&d1);
	figuri.push_back(&d2);
	figuri.push_back(&c1);

	Cerc* var = dynamic_cast<Cerc*>(figuri[0]);
	(*var).afisare();

	/*
	Figura* figMax = figCuArieMax(figuri);
	Figura* figMax_2 = figCuPerimetruMax(figuri);

	std::cout << "Dintre figurile: " << std::endl;

	for (std::vector<Figura*>::iterator i = figuri.begin(); i != figuri.end(); i++)
	{
		(*i)->afisare();
	}


	std::cout << std::endl << "aria maxima o are: " << std::endl;
	//figMax->afisare();
	std::cout << std::endl << "Perimetru maxim : " << std::endl;
	//figMax_2->afisare();


	//sort(figuri.begin(), figuri.end(), rule);
	//for (std::vector<Figura*>::iterator i = figuri.begin(); i != figuri.end(); i++)
	//{
	//	(*i)->afisare();
	//}
	
	

	
	for (std::vector<Figura*>::iterator i = figuri.begin(); i != figuri.end(); i++)
	{
		Triunghi* var = dynamic_cast<Triunghi*>(*i);
		(*var).afisare();
	}
	*/


	
	return 0;
}