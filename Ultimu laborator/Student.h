#pragma once
#include <string>


class Student
{
	std::string m_sNume;
	int m_iNotaP2;
public:
	Student(std::string m_sNume, int m_iNotaP2);
	void Afisare();
};

