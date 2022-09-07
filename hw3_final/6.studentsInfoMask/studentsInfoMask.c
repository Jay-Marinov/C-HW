#include "funcs.h"

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
            printf("________________________________________________________________\n");
            printf("Final: \n");
            PrintMask(mask);
            break;
        default:
            fprintf(stderr, "Wrong option\n");
            break;
        }
        printf("________________________________________________________________\n");
    }

    return EXIT_SUCCESS;
}
