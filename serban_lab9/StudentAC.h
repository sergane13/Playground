#pragma once
#include "PersoanaAC.h"

class StudentAC :
    public PersoanaAC
{
	int m_ianStudiu;
	int m_inotaP2;
public:
	StudentAC();
	StudentAC(std::string cnp, std::string nume, std::string adresa, int anStudiu, int notaP2);
	~StudentAC();
	StudentAC(const StudentAC& copy);
	int get_m_ianStudiu();
	int get_m_inotaP2();
	void afisareProfil();
	void inscriereAnStudiu(int anStudiuNou);
	StudentAC comparaNote(StudentAC a);
};

void afisareProfil1(StudentAC a);