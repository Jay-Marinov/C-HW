#include "funcs.h"

int CheckEquals(int *arr, size_t n) // Check if all the elements in the array are equal
{
    int sameElements = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[0] == arr[i])
        {
            sameElements++;
        }
    }
    if (sameElements == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int secondMax(int *arr, size_t n, int *secondMax) // Get the second biggest number in the array
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

    for (int i = 2; i < n; i++)
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

    *secondMax = second;
    return 0;
}