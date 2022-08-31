#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcs.h"

int main()
{
    srand(time(0));
    int n, m, p;
    printf("Enter initial array size: ");
    scanf("%d", &n);

    double *arr = malloc(n * sizeof(double));
    if (NULL == arr)
    {
        fprintf(stderr, "Malloc problem");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = RandGenerator(0, 1);
    }

    printf("Initial array:\n");
    PrintArr(arr, n);

    printf("Number of elements to add: ");
    scanf("%d", &m);

    arr = realloc(arr, (n + m) * sizeof(double));
    if (NULL == arr)
    {
        fprintf(stderr, "Realloc problem");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < m; i++)
    {
        arr[i + n] = RandGenerator(1, 2);
    }

    printf("Array after first resize:\n");
    PrintArr(arr, n + m);

    printf("Number of elements to add: ");
    scanf("%d", &p);

    arr = realloc(arr, (n + m + p) * sizeof(double));
    if (NULL == arr)
    {
        fprintf(stderr, "Realloc problem");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < p; i++)
    {
        arr[i + n + m] = RandGenerator(2, 3);
    }

    printf("Array after second resize:\n");
    PrintArr(arr, n + m + p);
    free(arr);

    return 0;
}
