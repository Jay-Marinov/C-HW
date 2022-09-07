#include "funcs.h"

double SquareRoot(double x) // Return the square root of a number
{
    double y = 1.0;
    while (ABS(x / y - y) > TOL)
    {
        y = (y + x / y) / 2.0;
    }
    return y;
}