#include "Persoana.h"

Persoana::Persoana(string nume, string adresa) {
	m_sNume = nume;
	m_sAdresa = adresa;
}

void Persoana::schimbareAdresa(string adresaNoua)
{
	m_sAdresa = adresaNoua;
}

void Persoana::afisareProfil() {
	cout << "Nume: " << m_sNume << ", Adresa: " << m_sAdresa << endl;
}