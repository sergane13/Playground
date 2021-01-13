#include "Student.h"
#include <iostream>

Student::Student(std::string m_sNume, int m_iNotaP2)
{
	if (m_iNotaP2 >= 1 && m_iNotaP2 <= 11)
	{
		this->m_iNotaP2 = m_iNotaP2;
	}
	else 
	{
		throw "notaP2 nu e in interval";
	}

	this->m_sNume = m_sNume;
}

void Student::Afisare()
{
	std::cout << m_sNume << std::endl;
	std::cout << m_iNotaP2 << std::endl;
}
