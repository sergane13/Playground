#include <iostream>


template<typename T>
void citire_vector(int n, T* v)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "Introdu elementul " << i << " din vector: ";
		std::cin >> v[i];
	}
}


template<typename T>
void afisare_vector(int n, T* v)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << v[i] <<" ";
	}
}


template<typename T>
void bubbleSort(int n, T* v)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (v[j] > v[j + 1])
			{
				std::swap(v[j], v[j + 1]);
			}
		}
	}
}