#include "Profesor.h"


int main() {

	Persoana p1("Ion", "str. Libertatii");
	Persoana p2("Andrei", "str. Calea Victoriei");
	Student s1("Mihai", "str. Cuza Voda", 2, 5);
	Student s2("Petru", "str. Stefan cel mare", 2, 3);
	Student s3("Vasile", "str. Stefan cel mare", 4, 7);
	Student s4("Ionel", "str. Stefan cel mare",3, 12);
	p1.afisareProfil();
	p2.afisareProfil();
	s1.afisareProfil();
	s2.afisareProfil();
	s3.afisareProfil();
	s4.afisareProfil();

	vector<Student> v = { s1 , s2, s3, s4};
	Profesor gigel("Vasile", "Sf nectarie de sus", "stapan al inelelor", v);
	
	gigel.acordaNota(1, 10);
	cout << "\n";
	gigel.afiseazaStudenti();
	cout << "\n";
	gigel.sortare_studenti();
	gigel.afiseazaStudenti();

	return 0;

}