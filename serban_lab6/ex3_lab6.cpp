#include <iostream>
#include "ex3_lab6_functii.cpp"
using namespace std;


int main()
{
	int number;
	cout << "Cate elemente doresti?: ";
	cin >> number;

	int* vector = new int[number];
	citire_vector(number, vector);
	afisare_vector(number, vector);
	cout << "\n";

	bubbleSort(number, vector);
	afisare_vector(number, vector);
	cout << "\n";

	double* vector_1 = new double[number];
	citire_vector(number, vector_1);
	afisare_vector(number, vector_1);
	cout << "\n";

	bubbleSort(number, vector_1);
	afisare_vector(number, vector_1);

	return 0;
}