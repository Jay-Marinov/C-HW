#include "funcs.h"

int main()
{
    int Array[] = {1, 4, 7, 8, 12, 15, 18, 25, 58, 60};
    unsigned int uArraySize = sizeof(Array) / sizeof(Array[0]);
    int uValue;

    printf("Enter a number to search for: \n");
    scanf("%d", &uValue);

    int result = (BinSearch(Array, uArraySize, uValue)); // result != -1 -> holds the index of the searched number, result == -1 -> number not found
    if (result != 0xFFFF)                                // Number found
    {
        printf("Number index: %d\n", result); // Print the index of the searched number
        return EXIT_SUCCESS;
    }
    else // Number not found
    {
        fprintf(stderr, "Invalid number!\n");
        return EXIT_FAILURE;
    }
}
