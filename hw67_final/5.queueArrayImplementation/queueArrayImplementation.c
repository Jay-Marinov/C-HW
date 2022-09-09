#include "funcs.h"

int main()
{
    int *arr;                            // Array that holds the queue
    arr = calloc(MAX_SIZE, sizeof(int)); // Allocate space for the queue
    int top = -1;                        // Queue limits
    int bottom = -1;                     // Queue limits
    int endLoop = 1;                     // While loop exit

    while (endLoop)
    {
        int option;
        printf("____________________\nSelect an option: \n1: Add value to the queue\n2: Remove value from the queue\n3: Check if queue is full\n4: Check if queue is empty\n5: Print array\n6: Exit\nSelect:");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            Push(arr, &bottom, &top, num); // Add num at the top of the queue
            break;

        case 2:
            Pop(arr, &bottom, &top); // Remove number from the bottom of the queue
            break;

        case 3:
            printf("%d (0-full, 1-not full)\n", isFull(top)); // Check if queue is full
            break;

        case 4:
            printf("%d (0-empty, 1-not empty)\n", isEmpty(bottom, top)); // Check if quque is empty
            break;

        case 5:
            PrintArray(arr); // Print queue
            break;

        case 6: // Exit
            endLoop = 0;
            break;

        default:
            fprintf(stderr, "Wrong option!\n");
            break;
        }
    }

    return EXIT_SUCCESS;
}
