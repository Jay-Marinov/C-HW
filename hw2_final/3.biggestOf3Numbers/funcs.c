#include "funcs.h"

void GetNumbers(double *arr) // Get real numbers from a text file
{
    double num;
    int count = 0;

    while (scanf("%lf", &num) != EOF)
    {
        arr[count] = num;
        count++;
    }
}

double GetBiggestNumber(double *arr) // Determine the biggest number in the array
{
    double biggestNumber = arr[0];
    for (int i = 1; i < NUM_COUNT; i++)
    {
        if (arr[i] > biggestNumber)
        {
            biggestNumber = arr[i];
        }
    }

    return biggestNumber;
}

void PrintNumbers(double *arr) // Print all elements of the array
{
    for (int i = 0; i < NUM_COUNT; i++)
    {
        printf("%lf\n", arr[i]);
    }
}