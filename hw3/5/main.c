#include <stdio.h>
#include <stdint.h>

void PrintMask(uint64_t mask);
int Count(uint64_t mask);

int main()
{
    uint64_t mask;
    printf("Enter a number: ");
    scanf("%lu", &mask);
    PrintMask(mask);
    printf("Number of 1's: %d\n", Count(mask));

    return 0;
}

int Count(uint64_t mask)
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

void PrintMask(uint64_t mask)
{
    printf("Binary: ");
    for (int bit = 63; bit >= 0; bit--)
    {
        printf("%d", !!(mask & (1L << bit)));
    }
    printf("\n");
}