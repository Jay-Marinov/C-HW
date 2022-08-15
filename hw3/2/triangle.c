#include <stdio.h>
#include <math.h>

double Triangle(double a, double b, double c, double *S, double *P);

int main()
{
    double a, b, c, S, P;

    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        Triangle(a, b, c, &S, &P);
        printf("\n");
    }

    return 0;
}

double Triangle(double a, double b, double c, double *S, double *P)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        fprintf(stderr, "Invalid triangle sides!\n");
        return -1;
    }

    *P = a + b + c;
    double sP = *P / 2;
    *S = sqrt(sP * ((sP - a) * (sP - b) * (sP - c)));

    printf("Area (S) = %0.2lf\n", *S);
    printf("Semi Perimeter (sP) = %0.2lf\n", sP);
    printf("Perimeter (P) = %0.2lf\n", *P);
    return 1;
}
