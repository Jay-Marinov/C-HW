#include "funcs.h"

unsigned char CheckBit(int16_t uValue)
{
    char counter = 0; // Holds the count of set bits in the number

    for (int bit = 0; bit < 64; bit++)
    {
        if (!!(uValue & (1L << bit)))
        {
            counter++;
        }
    }

    if (counter == 1) // If exactly one bit in the number is set
    {
        return 1;
    }

    return 0; // If there are more then one or none set bits in the number
}

void PrintMask(uint16_t uValue) // Prints 16 bit number as a binary
{
    printf("Binary: ");
    for (int bit = 15; bit >= 0; bit--)
    {
        printf("%d", !!(uValue & (1 << bit)));
    }
    printf("\n");
}
