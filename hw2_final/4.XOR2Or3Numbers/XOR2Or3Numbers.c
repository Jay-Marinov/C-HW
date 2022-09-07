#include "func.h"

int main()
{
    int *arr = (int *)malloc(3 * sizeof(int)); // Allocate space for the array
    GetNumbers(arr);                           // Fill the array with values

    printf("Result: %d\n", GetResult(arr));
    free(arr); // Free the alocated space

    return EXIT_SUCCESS;
}
