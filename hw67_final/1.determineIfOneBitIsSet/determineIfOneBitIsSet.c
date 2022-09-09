#include "funcs.h"

int main()
{
    int16_t uValue; // Hold 16 but number
    printf("Enter a number:\n");
    scanf("%hd", &uValue);

    PrintMask(uValue); // Print number as a binary

    if (CheckBit(uValue) == 1) // Check if Exactly one bit in the number is set
    {
        printf("Exactly one bit in the number is set!\n");
    }
    else
    {
        printf("There are more then one or none set bits in the number!\n");
    }

    return EXIT_SUCCESS;
}