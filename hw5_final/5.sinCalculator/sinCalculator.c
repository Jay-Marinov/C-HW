#include "funcs.h"

int main()
{
    double deg;
    printf("Enter degrees: ");
    scanf("%lf", &deg);
    printf("Sine of %.2lf degrees: %.2lf\n", deg, Sine(deg));
    return EXIT_SUCCESS;
}
