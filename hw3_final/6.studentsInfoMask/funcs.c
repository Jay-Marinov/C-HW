#include "funcs.h"

void PrintMask(uint64_t mask) // Prints 64 bit number as a binary
{
    printf("Binary: ");
    for (int bit = 63; bit >= 0; bit--)
    {
        printf("%d", !!(mask & (1L << bit)));
    }
    printf("\n");
}

void HandleAttendance(uint64_t *mask, int option) // Мark student attendance, Мark student absence, Change student status
{
    int num;
    printf("Choose student number: ");
    scanf("%d", &num);

    if (num < 0 || num > 63) // Checks if student number is a valid value
    {
        fprintf(stderr, "Wrong student number\n");
        return;
    }

    switch (option)
    {
    case 1:
        *mask |= (1L << (num - 1)); // Мark student attendance
        break;
    case 2:
        *mask &= ~(1L << (num - 1)); // Мark student absence
        break;
    case 3:
        *mask ^= (1L << (num - 1)); // Change student status
        break;
    default:
        break;
    }
}

void HandleShowAttendance(uint64_t mask, int option) // Show attending and missing students
{
    int count = 0;

    if (option == 1) // Show total missing students and their student numbers
    {
        printf("Current missing students: ");
        for (int bit = 0; bit < 64; bit++)
        {
            if (!(!!(mask & (1L << bit))))
            {
                printf("%d ", bit + 1);
                count++;
            }
        }
        printf("\nTotal missing students: %d\n", count);
    }

    else if (option == 2) // Show total attending students and their student numbers
    {
        printf("Current attending students: ");
        for (int bit = 0; bit < 64; bit++)
        {
            if (!!(mask & (1L << bit)))
            {
                printf("%d ", bit + 1);
                count++;
            }
        }
        printf("\nTotal attending students: %d\n", count);
    }
}