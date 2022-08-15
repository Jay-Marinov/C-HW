#include <stdio.h>
#include <stdint.h>

void PrintMask(uint64_t mask);
void HandleAttendance(uint64_t *mask, int option);
void HandleShowAttendance(uint64_t *mask, int option);

int main()
{

    uint64_t mask = 0;
    int option;
    int endLoop = 1;

    while (endLoop)
    {
        printf("Select option:\n1: Add attendance\n2: Remove attendance\n3: Show missing students\n4: Show attending students\n5: Change status\n6: Exit\nOption: ");
        scanf("%d", &option);
        printf("\n");
        PrintMask(mask);
        switch (option)
        {
        case 1:
            HandleAttendance(&mask, 1);
            PrintMask(mask);
            break;

        case 2:
            HandleAttendance(&mask, 2);
            PrintMask(mask);
            break;

        case 3:
            HandleShowAttendance(&mask, 1);
            break;

        case 4:
            HandleShowAttendance(&mask, 2);
            break;

        case 5:
            HandleAttendance(&mask, 3);
            PrintMask(mask);
            break;

        case 6:
            endLoop = 0;
            PrintMask(mask);
            break;
        default:
            fprintf(stderr, "Wrong option\n");
            break;
        }
        printf("________________________________________________________________\n");
    }

    return 0;
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

void HandleAttendance(uint64_t *mask, int option)
{
    int num;
    printf("Choose student number: ");
    scanf("%d", &num);

    if (num < 0 || num > 63)
    {
        fprintf(stderr, "No such student\n");
        return;
    }

    switch (option)
    {
    case 1:
        *mask |= (1L << (num - 1));
        break;
    case 2:
        *mask &= ~(1L << (num - 1));
        break;
    case 3:
        *mask ^= (1L << (num - 1));
        break;
    default:
        break;
    }
}

void HandleShowAttendance(uint64_t *mask, int option)
{
    int count = 0;

    if (option == 1)
    {
        printf("Current missing students: ");
        for (int bit = 0; bit < 64; bit++)
        {
            if (!(!!(*mask & (1L << bit))))
            {
                printf("%d ", bit + 1);
                count++;
            }
        }
        printf("\nTotal missing students: %d\n", count);
    }

    else if (option == 2)
    {
        printf("Current attending students: ");
        for (int bit = 0; bit < 64; bit++)
        {
            if (!!(*mask & (1L << bit)))
            {
                printf("%d ", bit + 1);
                count++;
            }
        }
        printf("\nTotal attending students: %d\n", count);
    }
}