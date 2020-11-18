#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;


class StudentAC1
{
	string nume;
	int nota;

public:
	
	StudentAC1();
	StudentAC1(string nume, int nota);
	string get_nume();
	int get_nota();
	void set_nume(string value);
	void afisare();
	void set_nota(int value);
	bool operator<(StudentAC1 a);
	bool operator>(StudentAC1 a);

};
