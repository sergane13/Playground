#include "Triunghi.h"

Triunghi::Triunghi(int x1, int x2, int x3, int y1, int y2, int y3)
{
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
}

double Triunghi::arie()
{	
	double l1 = sqrt((x1 - x2) ^ 2 + (y1 - y2) ^ 2);
	double l2 = sqrt((x1 - x3) ^ 2 + (y1 - y3) ^ 2);
	double l3 = sqrt((x2 - x3) ^ 2 + (y2 - y3) ^ 2);

	double p = (l1 + l2 + l3) / 2;

	return sqrt(p * (p - l1) * (p - l2) * (p - l3));
}

double Triunghi::semiperimetru()
{
	double l1 = sqrt((x1 - x2) ^ 2 + (y1 - y2) ^ 2);
	double l2 = sqrt((x1 - x3) ^ 2 + (y1 - y3) ^ 2);
	double l3 = sqrt((x2 - x3) ^ 2 + (y2 - y3) ^ 2);

	return (l1 + l2 + l3) / 2;
}

double Triunghi::perimetru()
{
	return 2 * semiperimetru();
}
