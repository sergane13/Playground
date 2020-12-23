#pragma once
#include "Figura.h"
#include <vector>

class Triunghi :
    public Figura
{
    int x1, y1;
    int x2, y2;
    int x3, y3;

public:
    Triunghi(int x1, int x2, int x3, int y1, int y2, int y3);
    double arie();
    double semiperimetru();
    double perimetru();
};

