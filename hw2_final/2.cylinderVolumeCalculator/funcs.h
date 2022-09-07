#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef _FUNCS_H_
#define _FUNCS_H_

struct Cylinder
{
    double radius;
    double height;
    double length;
};

double CalculateVertical();
double CalculateHorizontal();
void GetInfo(struct Cylinder *cylinder, int option);

#endif