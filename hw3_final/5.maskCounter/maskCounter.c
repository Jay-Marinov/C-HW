#include "funcs.h"

int main()
{
    uint64_t mask; // 64 bit mask
    printf("Enter a number: ");
    scanf("%lu", &mask);
    PrintMask(mask);
    printf("Number of 1's: %d\n", onesCount(mask));

    return EXIT_SUCCESS;
}
