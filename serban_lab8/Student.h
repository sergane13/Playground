#pragma once
#include "Persoana.h"

class Student :
    public Persoana
{

    int m_iAnStudiu;
    int m_iNotaP2;

public:
    Student(string nume, string adresa, int anStudiu, int notaP2);
    void inscriereAnStudiu(int anStudiuNou);
    void afisareProfil();
    void schimbaNota(int notaNoua);
    int get_nota();

};
