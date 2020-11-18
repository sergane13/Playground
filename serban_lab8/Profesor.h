#pragma once
#include "Student.h"

class Profesor :
    public Persoana
{
    string m_sGradDidactic;
    vector<Student> m_studenti;

public:
    Profesor(string nume, string adresa, string grad, vector<Student> studenti);
    void acordaNota(int poz, int nota);
    void afiseazaStudenti();
    vector<Student> sortare_studenti();
};

