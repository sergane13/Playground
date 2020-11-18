#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Persoana
{

protected:
	string m_sNume;
	string m_sAdresa;

public:
	Persoana(string nume, string adresa);
	void schimbareAdresa(string adresaNoua);
	void afisareProfil();

};

