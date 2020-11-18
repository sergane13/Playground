#include "StudentAC1.h"

StudentAC1::StudentAC1()
{
	cout << "A fost apelat costructorul implicit\n";
	nume = "Nan";
	nota = 0;
}

StudentAC1::StudentAC1(string nume, int nota)
{
	cout << "A fost apelat costructorul cu parametri\n";
	this->nume = nume;
	this->nota = nota;
}

string StudentAC1::get_nume()
{
	return nume;
}

int StudentAC1::get_nota()
{
	return nota;
}

void StudentAC1::set_nume(string value)
{
	nume = value;
}

void StudentAC1::afisare()
{
	cout << "numele este " << nume << "\n";
	cout << "nota este " << nota << "\n";
}

void StudentAC1::set_nota(int value)
{
	nota = value;
}

bool StudentAC1::operator<(StudentAC1 a)
{
	if (nota < a.nota)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool StudentAC1::operator>(StudentAC1 a)
{
	if (nota > a.nota)
	{
		return true;
	}
	else
	{
		return false;
	}
}
