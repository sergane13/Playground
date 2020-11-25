#include "StudentAC.h"

StudentAC::StudentAC()
{
	std::cout << "constr. fara arg. StudentAC" << std::endl;
	m_ianStudiu = 0;
	m_inotaP2 = 0;
}
StudentAC::StudentAC(std::string cnp, std::string nume, std::string adresa, int anStudiu, int notaP2) :
	PersoanaAC(cnp, nume, adresa), m_ianStudiu(anStudiu), m_inotaP2(notaP2)
{
	std::cout << "constr. cu arg. StudentAC" << std::endl;
}
StudentAC::~StudentAC()
{
	std::cout << "destructor StudentAC" << std::endl;
}

StudentAC::StudentAC(const StudentAC& copy)
{
	m_sCnp = copy.m_sCnp;
	m_sNume = copy.m_sNume;
	m_sAdresa = copy.m_sAdresa;
	m_ianStudiu = copy.m_ianStudiu;
	m_inotaP2 = copy.m_inotaP2;
}

int StudentAC::get_m_ianStudiu()
{
	return m_ianStudiu;
}

int StudentAC::get_m_inotaP2()
{
	return m_inotaP2;
}

void StudentAC::afisareProfil()
{
}

void StudentAC::inscriereAnStudiu(int anStudiuNou)
{
}

StudentAC StudentAC::comparaNote(StudentAC a)
{
	StudentAC temp(m_sCnp, m_sNume, m_sAdresa, m_ianStudiu, m_inotaP2);
	return (m_inotaP2 < a.m_inotaP2) ? temp : a;
}
