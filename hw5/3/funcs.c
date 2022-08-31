#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcs.h"

double RandGenerator(double min, double max)
{
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

void PrintArr(double *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.2lf\n", arr[i]);
    }
}