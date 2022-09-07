#include "funcs.h"

int main()
{
    srand(time(0)); // Time seed (used for generating random numbers)
    int n, m, p;    // n - initial array size; m - the size for the first array resize; p - the size for the second array resize
    printf("Enter initial array size: ");
    scanf("%d", &n); // Set initial array size

    double *arr = malloc(n * sizeof(double)); // Create initial array
    if (NULL == arr)                          // Check if the initial array was created succesfully
    {
        fprintf(stderr, "Malloc problem");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++) // Fill up the initial array elements with values between 0 and 1
    {
        arr[i] = RandGenerator(0, 1);
    }

    printf("Initial array:\n");
    PrintArr(arr, n); // Print the initial array

    printf("Number of elements to add: ");
    scanf("%d", &m); // Set the number of elements to be added to the initial array

    arr = realloc(arr, (n + m) * sizeof(double)); // Realocate memory for the new elements
    if (NULL == arr)                              // Check if the array was resized succesfully
    {
        fprintf(stderr, "Realloc problem");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < m; i++) // Fill up the new array elements with values between 1 and 2
    {
        arr[i + n] = RandGenerator(1, 2);
    }

    printf("Array after first resize:\n");
    PrintArr(arr, n + m); // Print the resized array

    printf("Number of elements to add: ");
    scanf("%d", &p); // Set the number of elements to be added to the resized array

    arr = realloc(arr, (n + m + p) * sizeof(double)); // Realocate memory for the new elements
    if (NULL == arr)                                  // Check if the array was resized succesfully
    {
        fprintf(stderr, "Realloc problem");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < p; i++)
    {
        arr[i + n + m] = RandGenerator(2, 3); // Fill up the new array elements with values between 2 and 3
    }

    printf("Array after second resize:\n");
    PrintArr(arr, n + m + p); // Print the resized array
    free(arr);                // Free the memory of the array

    return EXIT_SUCCESS;
}
