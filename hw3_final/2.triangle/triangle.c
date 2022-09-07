#include "funcs.h"

int main()
{
    double a, b, c, S, P; // a,b,c - triangle sides; S - triangle area; P - triangle perimeter

    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        Triangle(a, b, c, &S, &P);
        printf("\n");
    }

    return EXIT_SUCCESS;
}
