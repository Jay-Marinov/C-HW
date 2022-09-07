#include <stdio.h>
#include <stdint.h>

#define SETBIT(mask, bit) (mask |= (1 << bit))      // set a bit to 1
#define CLEARBIT(mask, bit) (mask &= ~(1 << bit))   // set a bit to 0
#define INVERSEBIT(mask, bit) (mask ^= (1 << bit))  // inverse a bit
#define CHECKBIT(mask, bit) (!!(mask & (1 << bit))) // check if a bit is set to 1 or 0

void PrintMask(uint32_t mask);

int main()
{
    int num = 0;

    printf("Initial mask: \n");
    PrintMask(num);

    printf("Set second bit to 1: \n");
    SETBIT(num, 1);
    PrintMask(num);

    printf("Set second bit to 0: \n");
    CLEARBIT(num, 1);
    PrintMask(num);

    printf("Inverse second bit from 0 to 1: \n");
    INVERSEBIT(num, 1);
    PrintMask(num);

    printf("Check if second bit is 0 or 1: \n");
    printf("%d\n", CHECKBIT(num, 1));

    return 0;
}

void PrintMask(uint32_t mask) // Print all the bits of a mask
{
    for (int bit = 31; bit >= 0; bit--)
    {
        printf("%d", CHECKBIT(mask, bit));
    }
    putchar('\n');
}
