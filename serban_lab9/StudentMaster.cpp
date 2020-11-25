#include "StudentMaster.h"

StudentMaster::StudentMaster()
{
	std::cout << "constr. fara arg. StudentMaster" << std::endl;
	m_sNumeDizertatie = "Nan";
}

StudentMaster::StudentMaster(std::string cnp, std::string nume, std::string adresa, int anStudiu, int notaP2, std::string m_sNumeDizertatie):
	StudentAC(cnp, nume, adresa, anStudiu, notaP2)
{
	this->m_sNumeDizertatie = m_sNumeDizertatie;
}

StudentMaster::~StudentMaster()
{
	std::cout << "destructorul StudentMaster" << std::endl;
}
