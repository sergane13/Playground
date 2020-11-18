#include "Profesor.h"

bool criteriu(Student a, Student b)
{
	return (a.get_nota() > b.get_nota());
}

Profesor::Profesor(string nume, string adresa, string grad, vector<Student> studenti):
	Persoana(nume, adresa), m_sGradDidactic(grad), m_studenti(studenti) {
}

void Profesor::acordaNota(int poz, int nota)
{
	m_studenti[poz].schimbaNota(nota);
}

void Profesor::afiseazaStudenti()
{
	vector<Student>::iterator i;
	for (i = m_studenti.begin(); i != m_studenti.end(); i++)
	{
		(*i).afisareProfil();
	}
}

vector<Student> Profesor::sortare_studenti()
{
	sort(m_studenti.begin(), m_studenti.end(), criteriu);
	return m_studenti;
}


