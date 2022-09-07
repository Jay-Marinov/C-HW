#include "funcs.h"

double quadEquation(double a, double b, double c, double *x1, double *x2)
{
    double discriminant = b * b - 4 * a * c; // Calculate discriminant

    if (discriminant > 0) // Check if discriminant is greater then 0
    {
        *x1 = (-b + sqrt(discriminant)) / (2 * a); // Calculate first root
        *x2 = (-b - sqrt(discriminant)) / (2 * a); // Calculate second root
        printf("x1 = %.2lf\nx2 = %.2lf\n", *x1, *x2);
        return 0;
    }
    else if (discriminant == 0)
    {
        *x1 = -b / (2 * a); // The two roots are equal
        *x2 = -b / (2 * a); // The two roots are equal
        printf("x1 = %.2lf\n", *x1);
        printf("x1 = %.2lf\n", *x2);
        return 0;
    }
    else
    {
        printf("No real roots\n");
        return -1;
    }
}