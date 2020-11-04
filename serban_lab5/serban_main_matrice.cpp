#include <iostream>
#include "serban_Matrice.h"

using namespace std;

int main()
{
	Matrice a(3, 3);
	Matrice b(3, 3);
	bool c;
	int rel = 1;
	a.Citire_Matrice();
	b.Citire_Matrice();

	std::cout << "\n";
	a.Afisare_Matrice();
	std::cout << "\n";
	b.Afisare_Matrice();

	while (rel == 1)
	{
		int choose;
		std::cout << "Alege o varianta(1(+); 2(-); 3(*); 4(==); 5(a+2); 6(transpusa); 7(++a); 8(a++); 9(vezi elementul 2 a lui a)\n";
		std::cin >> choose;

		switch (choose)
		{
		case 1:
			(a + b).Afisare_Matrice();
			break;
		case 2:
			(a - b).Afisare_Matrice();
			break;
		case 3:
			(a * b).Afisare_Matrice();
			break;
		case 4:
			c = a == b;
			break;
		case 5:
			(a + 2).Afisare_Matrice();
			//(2 + a).Afisare_Matrice();
			break;
		case 6:
			(~a).Afisare_Matrice();
			break;
		case 7:
			a++;
			a.Afisare_Matrice();
			break;
		case 8:
			++a;
			a.Afisare_Matrice();
			break;
		case 9:
			std::cout << a[1] << "\n";
			break;
		default:
			std::cout << "Nu ai selectat nimic\n";
		}
		std::cout << "Doresti a rula din nou?(0-Nu; 1-Da)";
		std::cin >> rel;
	}
	return 0;
}
