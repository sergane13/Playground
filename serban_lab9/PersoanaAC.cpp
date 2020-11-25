#include "PersoanaAC.h"

PersoanaAC::PersoanaAC()
{
	std::cout << "constr. fara arg. PersoanaAC" << std::endl;
	m_sCnp = std::string(13, '0');
	m_sNume = "";
	m_sAdresa = "";
}
PersoanaAC::PersoanaAC(std::string cnp, std::string nume, std::string adresa)
{
	std::cout << "constr. cu arg. PersoanaAC" << std::endl;
	m_sCnp = cnp;
	m_sNume = nume;
	m_sAdresa = adresa;
}
PersoanaAC::~PersoanaAC()
{
	std::cout << "destructor PersoanaAC" << std::endl;
}

std::string PersoanaAC::get_m_sNume()
{
	return m_sNume;
}

void PersoanaAC::afisareProfil()
{
}

void PersoanaAC::schimbareAdresa(std::string adresaNoua)
{
}


