#include "funcs.h"

int main()
{
    double biggestNumber;
    double *arr = (double *)malloc(NUM_COUNT * sizeof(double)); // Allocate space for the array
    GetNumbers(arr);                                            // Get real numbers from a text file

    printf("Numbers: \n");
    PrintNumbers(arr); // Print all elements of the array

    biggestNumber = GetBiggestNumber(arr); // Determine the biggest number in the array

    printf("\nThe biggest number is: %lf\n", biggestNumber); // Print the biggest numbers

    free(arr); // Free the alocated space for the array

    return EXIT_SUCCESS;
}
