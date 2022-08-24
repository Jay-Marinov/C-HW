#include <stdio.h>

int CheckEquals(int *arr, int size);
int SecondBiggest(int *arr, int size);

int main()
{
    int arr[] = {12, 34, 5, 70, 46};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size == 0)
    {
        printf("Empty array!\n");
    }
    else if (size == 1)
    {
        printf("The array has only one element!\n");
    }
    else
    {
        if (CheckEquals(arr, size))
        {
            printf("All elements of the array are the same!\n");
        }
        else
        {
            printf("Second biggest number: %d \n", SecondBiggest(arr, size));
        }
    }

    return 0;
}

int CheckEquals(int *arr, int size)
{
    int sameElements = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[0] == arr[i])
        {
            sameElements++;
        }
    }
    if (sameElements == size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int SecondBiggest(int *arr, int size)
{
    int largest, second;

    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second = arr[1];
    }
    else
    {
        largest = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < size; i++)
    {
        if (largest < arr[i])
        {
            second = largest;
            largest = arr[i];
        }
        else if (second < arr[i])
        {
            second = arr[i];
        }
    }

    return second;
}