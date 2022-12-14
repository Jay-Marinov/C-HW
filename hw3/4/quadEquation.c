#include <stdio.h>
#include <math.h>

double quadEquation(double a, double b, double c, double *x1, double *x2);

int main()
{
    double a, b, c, x1, x2;
    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    quadEquation(a, b, c, &x1, &x2);

    return 0;
}

double quadEquation(double a, double b, double c, double *x1, double *x2)
{
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        *x1 = (-b + sqrt(discriminant)) / (2 * a);
        *x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("x1 = %.2lf\nx2 = %.2lf\n", *x1, *x2);
        return 0;
    }
    else if (discriminant == 0)
    {
        *x1 = -b / (2 * a);
        *x2 = -b / (2 * a);
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