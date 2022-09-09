#include "funcs.h"

void Add(const char *p1, const char *p2, char *result) // Calculate the sum of p1 and p2 and write it in result
{
    double num1, num2;
    sscanf(p1, "%lf", &num1); // Convert p1(string) to num1(double)
    sscanf(p2, "%lf", &num2); // Convert p2(string) to num2(double)

    if (num1 > 0 && num2 > 0) // Check if num1 and num2 are positive numbers
    {
        sprintf(result, "%lf", num1 + num2); // Convert the sum of num1(double) and num2(double) to string and write it in result
    }
    else if (num1 <= 0 && num2 <= 0)
    {
        strcpy(result, "err1"); // First and second numbers are not a positive numbers
    }
    else if (num1 <= 0)
    {
        strcpy(result, "err2"); // First number is not a positive number
    }
    else
    {
        strcpy(result, "err3"); // Second number is not a positive number
    }
}