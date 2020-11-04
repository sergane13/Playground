#pragma once

class Autoturism {

public:

	char* culoare;
	unsigned int an_fabricatie;
	
	static int nr_de_autoturisme;
	Autoturism();
	Autoturism(const char* cul, unsigned int an);
	Autoturism(Autoturism& copy);
	~Autoturism();
	void afisare();
	Autoturism schimbare_culoare(const char* cul);
	void comparare_automobile(Autoturism a);

};

void citire(int n, Autoturism v[]);
void afisare_all(int n, Autoturism v[]);
void identificare_masina_noua(int n, Autoturism v[]);