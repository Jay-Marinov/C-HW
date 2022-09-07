#include "func.h"

void GetNumbers(int *arr) // Fill the array with values
{
    int num;
    int count = 0;

    while (scanf("%d", &num) != EOF)
    {
        arr[count] = num;
        count++;
    }
}

int GetResult(int *arr)
{
    int result = (!arr[0] && arr[1]) || (arr[0] && !arr[1]); // Compare 2 numbers

    if (arr[2]) // Compare 3 numbers
    {
        result = (!result && arr[2]) || (result && !arr[2]);
    }

    return result;
}