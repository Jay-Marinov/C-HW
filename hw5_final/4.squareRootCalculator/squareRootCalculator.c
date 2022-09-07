#include "funcs.h"

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Square root of %.2lf is %.2lf\n", num, SquareRoot(num)); // Print the square root of a number
    return EXIT_SUCCESS;
}
