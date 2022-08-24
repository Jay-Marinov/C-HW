#include <stdio.h>

int CheckEquals(int *arr, int size);
void SortNumbers(int *arr, int size);

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
            SortNumbers(arr, size);

            printf("Second biggest number: %d \n", arr[1]);
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

void SortNumbers(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
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
