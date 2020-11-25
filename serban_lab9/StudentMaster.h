#pragma once
#include "StudentAC.h"

class StudentMaster :
    public StudentAC
{
    std::string m_sNumeDizertatie;

public:
    StudentMaster();
    StudentMaster(std::string cnp, std::string nume, std::string adresa, int anStudiu, int notaP2, std::string m_sNumeDizertatie);
    ~StudentMaster();
};

 
bool rule(StudentMaster a, StudentMaster b);