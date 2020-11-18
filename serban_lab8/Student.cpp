#include "Student.h"

Student::Student(string nume, string adresa, int anStudiu, int notaP2) :
	Persoana(nume, adresa), m_iAnStudiu(anStudiu), m_iNotaP2(notaP2) {
}

void Student::inscriereAnStudiu(int anStudiuNou)
{
	m_iAnStudiu = anStudiuNou;
}

void Student::afisareProfil() {
	//Persoana::afisareProfil();
	cout << "Nume: " << m_sNume << ", Adresa: " << m_sAdresa << endl;
	cout << "An studiu: " << m_iAnStudiu << ", Nota P2: " << m_iNotaP2 << endl;
}

void Student::schimbaNota(int notaNoua)
{
	m_iNotaP2 = notaNoua;
}

int Student::get_nota()
{
	return m_iNotaP2;
}
