#include "StudentMaster.h"


void afisareProfil1(StudentAC a)
{
	std::cout << "An studiu este: " << a.get_m_ianStudiu() << "\n";
	std::cout << "Nota este: " << a.get_m_inotaP2() << "\n";
}


bool rule(StudentMaster a, StudentMaster b)
{
	return (a.get_m_inotaP2() > b.get_m_inotaP2());
}