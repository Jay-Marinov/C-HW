#include "funcs.h"

double Rectangle(double w, double h, double *S, double *P)
{
    if (w <= 0 || h <= 0) // Check if rectangle width and height are valid values
    {
        fprintf(stderr, "Invalid rectangle sides!\n");
        return -1;
    }

    *S = w * h;             // Calculate the area of the rectangle
    *P = (w * 2) + (h * 2); // Calculate the perimeter of the rectangle

    printf("Area (S) = %0.2lf\n", *S);
    printf("Perimeter (P) = %0.2lf\n", *P);
    return 1;
}