#include "funcs.h"

double Triangle(double a, double b, double c, double *S, double *P)
{
    if (a <= 0 || b <= 0 || c <= 0) // Check if all triangle sides are valid values
    {
        fprintf(stderr, "Invalid triangle sides!\n");
        return -1;
    }

    *P = a + b + c;                                   // Calculate the perimeter of the triangle
    double sP = *P / 2;                               // Semi perimeter (used in area calculation)
    *S = sqrt(sP * ((sP - a) * (sP - b) * (sP - c))); // Calculate the area of the triangle

    printf("Area (S) = %0.2lf\n", *S);
    printf("Semi Perimeter (sP) = %0.2lf\n", sP);
    printf("Perimeter (P) = %0.2lf\n", *P);
    return 1;
}