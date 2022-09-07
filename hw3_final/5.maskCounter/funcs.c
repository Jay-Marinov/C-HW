#include "funcs.h"

unsigned onesCount(uint64_t mask) // Count 1's in a binary number
{
    int counter = 0;

    for (int bit = 63; bit >= 0; bit--)
    {
        if (!!(mask & (1L << bit)))
        {
            counter++;
        }
    }

    return counter;
}

void PrintMask(uint64_t mask) // Print a number as a binary
{
    printf("Binary: ");
    for (int bit = 63; bit >= 0; bit--)
    {
        printf("%d", !!(mask & (1L << bit)));
    }
    printf("\n");
}