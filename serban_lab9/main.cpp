#include "StudentMaster.h"


int main()
{
	PersoanaAC p1("1234567890123", "Ana", "Iasi");
	p1.afisareProfil();
	StudentAC s2;
	s2.afisareProfil();
	StudentAC s1("1234567890122", "Ion", "Vaslui", 2, 10);
	s1.schimbareAdresa("Bucuresti");
	s1.inscriereAnStudiu(3);
	s1.afisareProfil();

	StudentAC temp = s2.comparaNote(s1);
	temp.afisareProfil();

	afisareProfil1(s1);


	std::vector<StudentMaster> studenti;
	StudentMaster m1("0000", "vasile", "Iasi", 2, 9, "Space , final frontier");
	StudentMaster m2("0001", "eu", "Vaslui city", 3, 10, "2020 SaaS development");
	StudentMaster m3("0010", "dragomir", "Tomesti", 1, 5, "Quantic computers");
	StudentMaster m4("0110", "miron", "Berlin", 4, 7, "BTC new bull market");
	StudentMaster m5("0111", "Igor", "LA", 2, 8, "AR the future of us");

	studenti = { m1, m2, m3, m4, m5 };
	sort(studenti.begin(), studenti.end(), rule);
	std::cout << studenti[0].get_m_sNume() << std::endl;
	return 0;
}
