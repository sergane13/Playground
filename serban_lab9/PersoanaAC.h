#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>


class PersoanaAC
{
protected:
	std::string m_sCnp;
	std::string m_sNume;
	std::string m_sAdresa;
public:
	PersoanaAC();
	PersoanaAC(std::string cnp, std::string nume, std::string adresa);
	~PersoanaAC();
	std::string get_m_sNume();
	void afisareProfil();
	void schimbareAdresa(std::string adresaNoua);

};

