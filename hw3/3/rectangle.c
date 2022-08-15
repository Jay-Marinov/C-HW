#include <stdio.h>

double Rectangle(double w, double h, double *S, double *P);

int main()
{
    double w, h, S, P;

    while (scanf("%lf %lf", &w, &h) != EOF)
    {
        Rectangle(w, h, &S, &P);
        printf("\n");
    }

    return 0;
}

double Rectangle(double w, double h, double *S, double *P)
{
    if (w <= 0 || h <= 0)
    {
        fprintf(stderr, "Invalid rectangle sides!\n");
        return -1;
    }

    *S = w * h;
    *P = (w * 2) + (h * 2);

    printf("Area (S) = %0.2lf\n", *S);
    printf("Perimeter (P) = %0.2lf\n", *P);
    return 1;
}
