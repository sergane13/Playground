#include "StudentAC1.h"
#include "functii.h"


int main()
{
	int n;
	cout << "Cati studenti doresti?: ";
	cin >> n;

	vector<StudentAC1> cohort;

	cohort = Citire_Studenti_vector(n, cohort);
	Afisare_Studenti(cohort);

	StudentAC1* cohort_alocat = new StudentAC1[n];
	vector<StudentAC1> cohort_de_schimbare;

	Citire_Studenti_pointer(n, cohort_alocat);
	cohort_de_schimbare = Interschimbare(n, cohort_alocat);
	Afisare_Studenti(cohort_de_schimbare);

	sort(cohort_de_schimbare.begin(), cohort_de_schimbare.end(), comparaNote);
	Afisare_Studenti(cohort_de_schimbare);

	cout << (cohort[0] > cohort[1]);

	delete[] cohort_alocat;

	return 0;
}