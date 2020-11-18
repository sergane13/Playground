#pragma once
#include "StudentAC1.h"

vector<StudentAC1> Citire_Studenti_vector(int n, vector<StudentAC1> cohort)
{
	int temp_nota;
	string temp_nume;

	for (int i = 0; i < n; i++)
	{
		cout << "Introdu numele: ";
		cin >> temp_nume;
		cout << "Introdu nota: ";
		cin >> temp_nota;
		cout << "\n";

		cohort.push_back(StudentAC1(temp_nume, temp_nota));
	}

	return cohort;
}

void Citire_Studenti_pointer(int n, StudentAC1 *cohort_alocat)
{
	int temp_nota;
	string temp_nume;

	for (int i = 0; i < n; i++)
	{	
		cout << "Introdu numele: ";
		cin >> temp_nume;
		cohort_alocat[i].set_nume(temp_nume);

		cout << "Introdu nota: ";
		cin >> temp_nota;
		cohort_alocat[i].set_nota(temp_nota);
		cout << "\n";
	}
}

vector<StudentAC1> Interschimbare(int n, StudentAC1* cohort_alocat)
{
	vector<StudentAC1> temp;
	for (int i = 0; i < n; i++)
	{
		temp.push_back(cohort_alocat[i]);
	}

	return temp;
}

void Afisare_Studenti(vector<StudentAC1> cohort)
{
	//cout << cohort.size();
	vector<StudentAC1>::iterator i;
	for (i = cohort.begin(); i != cohort.end(); i++)
	{
		cout << "Numele este " << (*i).get_nume() << "\n";
		cout << "Nota este " << (*i).get_nota() << "\n";
		cout << "\n";
	}
}


bool comparaNote(StudentAC1 a, StudentAC1 b)
{
	return (a.get_nota() < b.get_nota());
}