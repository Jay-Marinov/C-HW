#include "funcs.h"

int main()
{
    int arr[] = {12, 34, 5, 70, 46};
    size_t arrSize = sizeof(arr) / sizeof(arr[0]); // Holds the size of the array
    int secondMaxNum;                              // Second biggest number

    if (arrSize == 0) // Check if the array is empty
    {
        fprintf(stderr, "Empty array!\n");
        return EXIT_FAILURE;
    }
    else if (arrSize == 1) // Check if the array contains only one element
    {
        printf("The array has only one element!\n");
    }
    else
    {
        if (CheckEquals(arr, arrSize)) // Check if all the elements in the array are equal
        {
            printf("All elements of the array are the same!\n");
        }
        else
        {
            secondMax(arr, arrSize, &secondMaxNum); // Get the second biggest number in the array
            printf("Second biggest number: %d \n", secondMaxNum);
        }
    }

    return EXIT_SUCCESS;
}
