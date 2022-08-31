#include "funcs.h"
#define PI 3.14159265359
#define TERMS 7

double Sine(int deg)
{
    deg %= 360;
    double rad = deg * PI / 180;
    double sin = 0;

    for (int i = 0; i < TERMS; i++)
    {
        sin += Power(-1, i) * Power(rad, 2 * i + 1) / Fact(2 * i + 1);
    }
    return sin;
}

double Power(double base, int exp)
{
    if (exp < 0)
    {
        if (base == 0)
            return -0;
        return 1 / (base * Power(base, (-exp) - 1));
    }
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base;
    return base * Power(base, exp - 1);
}

int Fact(int n)
{
    return n <= 0 ? 1 : n * Fact(n - 1);
}