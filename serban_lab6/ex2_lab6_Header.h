#pragma once


template<typename T>
class Multime
{
public:

	T* vector;
	int numar_elemente;

	Multime(int n);
	Multime(const Multime& copy);
	~Multime();
	void citire();
	int operator!();
	Multime operator+(Multime);
	void aduna(Multime a);

};

template<typename T>
Multime<T>::Multime(int n)
{
	numar_elemente = n;
	std::cout << "a aparut o multime, tre sa o definesti\n";
	vector = new T[n];
}


template<typename T>
Multime<T>::Multime(const Multime<T>& copy)
{
	numar_elemente = copy.numar_elemente;
	vector = new T[numar_elemente];

	for (int i = 0; i < numar_elemente; i++)
	{
		vector[i] = copy.vector[i];
	}
}


template<typename T>
Multime<T>::~Multime()
{
	std::cout << "a aparut destructorul\n";
	delete[] vector;
}


template<typename T>
void Multime<T>::citire()
{
	for (int i = 0; i < numar_elemente; i++)
	{
		std::cout << "introdu elementu " << i << ": ";
		std::cin >> vector[i];
	}
}


template<typename T>
Multime<T> Multime<T>::operator+(Multime<T> a)
{
	Multime temp(numar_elemente);

	for (int i = 0; i < a.numar_elemente; i++)
	{
		temp.vector[i] = a.vector[i] + vector[i];
	}

	return temp;
}


template<typename T>
int Multime<T>::operator!()
{
	T temp = vector[0];
	for (int i = 1; i < numar_elemente; i++)
	{
		if (temp < vector[i])
		{
			temp = vector[i];
		}
	}
	return temp;
}


template<typename T>
void Multime<T>::aduna(Multime<T> a)
{
	for (int i = 0; i < a.numar_elemente; i++)
	{
		vector[i] = a.vector[i] + vector[i];
	}
}