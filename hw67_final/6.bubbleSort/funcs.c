#include "funcs.h"

void Bubble(int *pArray, unsigned int uLen) // Bubble sort function
{
    for (int i = 0; i < uLen - 1; i++)
    {
        int flag = 0;                          // How many swaps are done on each iteration
        for (int j = 0; j < uLen - i - 1; j++) // uLen - i - 1 - loops only trough the unsorted part of the array
        {
            if (pArray[j] > pArray[j + 1])
            {
                int temp = pArray[j];
                pArray[j] = pArray[j + 1];
                pArray[j + 1] = temp;
                flag++;
            }
        }
        if (flag == 0) // If the list is already sorted there would be no swaps
        {
            break;
        }
    }
}

void PrintArr(int *pArray, unsigned int uLen) // Print the array
{
    for (int i = 0; i < uLen; i++)
    {
        printf("%d ", pArray[i]);
    }
}

void FillArray(int *pArray, unsigned int uLen) // Fill the array with values
{
    for (int i = 0; i < uLen; i++)
    {
        printf("Enter element %d:", i + 1);
        scanf("%d", &pArray[i]);
    }
}