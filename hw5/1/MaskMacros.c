#include <stdio.h>
#include <stdint.h>

#define SETBIT(mask, bit) (mask |= (1 << bit))
#define CLEARBIT(mask, bit) (mask &= ~(1 << bit))
#define INVERSEBIT(mask, bit) (mask ^= (1 << bit))
#define CHECKBIT(mask, bit) (!!(mask & (1 << bit)))

void PrintMask(uint32_t mask);

int main()
{
    int num = 0;
    PrintMask(num);

    SETBIT(num, 1);
    PrintMask(num);

    CLEARBIT(num, 1);
    PrintMask(num);

    INVERSEBIT(num, 1);
    PrintMask(num);

    printf("%d\n", CHECKBIT(num, 1));

    return 0;
}

void PrintMask(uint32_t mask)
{
    for (int bit = 31; bit >= 0; bit--)
    {
        printf("%d", CHECKBIT(mask, bit));
    }
    putchar('\n');
}
