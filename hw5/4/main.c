#include <stdio.h>
#define ABS(n) (((n) < 0) ? -(n) : (n))
#define TOL 0.001

double SquareRoot(double x);

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Square root of %.2lf is %.2lf\n", num, SquareRoot(num));
    return 0;
}

double SquareRoot(double x)
{
    double y = 1.0;
    while (ABS(x / y - y) > TOL)
    {
        y = (y + x / y) / 2.0;
    }
    return y;
}