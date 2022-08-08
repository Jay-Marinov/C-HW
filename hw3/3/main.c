#include <stdio.h>
#include <stdlib.h>
#define NUM_COUNT 3

void GetNumbers(double *arr);
void SortNumbers(double *arr);
void PrintNumbers(double *arr);

int main()
{
    double *arr = (double *)malloc(NUM_COUNT * sizeof(double));
    GetNumbers(arr);

    printf("Numbers: \n");
    PrintNumbers(arr);

    SortNumbers(arr);

    printf("\nThe biggest number is: %lf\n", arr[0]);

    free(arr);

    return 0;
}

void GetNumbers(double *arr)
{
    double num;
    int count = 0;

    while (scanf("%lf", &num) != EOF)
    {
        arr[count] = num;
        count++;
    }
}

void SortNumbers(double *arr)
{
    for (int i = 0; i < NUM_COUNT; i++)
    {
        for (int j = 0; j < NUM_COUNT; j++)
        {
            if (arr[i] > arr[j])
            {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void PrintNumbers(double *arr)
{
    for (int i = 0; i < NUM_COUNT; i++)
    {
        printf("%lf\n", arr[i]);
    }
}