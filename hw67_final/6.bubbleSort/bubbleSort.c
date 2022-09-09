#include "funcs.h"

int main()
{
    int *Array;        // Creates a pointer to array
    unsigned int uLen; // Array size
    printf("Enter array size: ");
    scanf("%d", &uLen);
    Array = malloc(uLen * sizeof(int)); // Allocate memory for the array in the heap
    FillArray(Array, uLen);             // Fill the array with values

    if (uLen == 0)
    {
        fprintf(stderr, "Array is empty!\n");
        return EXIT_FAILURE;
    }
    else if (uLen == 1)
    {
        fprintf(stderr, "Array has only one element!\n");
        return EXIT_FAILURE;
    }

    printf("Original array: ");
    PrintArr(Array, uLen); // Print the original array
    putchar('\n');

    Bubble(Array, uLen); // Sort the array
    printf("Sorted array: ");
    PrintArr(Array, uLen); // Print the sorted array
    putchar('\n');

    free(Array); // Free the array memory from the heap

    return EXIT_SUCCESS;
}
