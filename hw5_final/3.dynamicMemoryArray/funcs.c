#include "funcs.h"

double RandGenerator(double min, double max) // Generate a randum number between min and max
{
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

void PrintArr(double *arr, int size) // Print all the elements of an array
{
    for (int i = 0; i < size; i++)
    {
        printf("%.2lf\n", arr[i]);
    }
}