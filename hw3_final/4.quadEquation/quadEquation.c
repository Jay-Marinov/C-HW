#include "funcs.h"

int main()
{
    double a, b, c, x1, x2; // a,b,c - known values; x1,x2 - roots
    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    quadEquation(a, b, c, &x1, &x2);

    return EXIT_SUCCESS;
}
