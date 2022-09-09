#include "funcs.h"

void VMirror(unsigned char *pImage) // Create a mirror coppy of the original Image
{
    unsigned char mirrorImage[8]; // Mirrored array
    for (int i = 0; i < 8; i++)   // Fill the mirror array with mirror values
    {
        mirrorImage[i] = mirror(pImage[i]);
    }

    printf("Original(hex) / Mirror(hex) \n---------------------------\n");
    for (int i = 0; i < 8; i++) // Print original and mirror hexadecimal arrays
    {
        printf("     ");
        printf("0x%02x", pImage[i]);
        printf("          ");
        printf("0x%02x", mirrorImage[i]);
        putchar('\n');
    }

    putchar('\n');

    printf("Original(bin) / Mirror(bin) \n---------------------------\n");
    for (int i = 0; i < 8; i++) // Print original and mirror binary arrays
    {
        printf("   ");
        for (int bit = 7; bit >= 0; bit--)
        {
            printf("%d", !!(pImage[i] & (1 << bit)));
        }
        printf("      ");
        for (int bit = 7; bit >= 0; bit--)
        {
            printf("%d", !!(mirrorImage[i] & (1 << bit)));
        }
        putchar('\n');
    }
}

unsigned char mirror(unsigned char original) // Creates a mirror coppy of the input (image row)
{
    unsigned char mirror = 0;
    unsigned char mask = 1;

    for (int i = 0; i < 8; ++i)
    {
        int bit = original & mask;
        mirror <<= 1;
        mirror += bit;
        original >>= 1;
    }

    return mirror;
}