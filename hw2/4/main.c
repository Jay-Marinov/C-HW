#include <stdio.h>
#include <stdlib.h>

void GetNumbers(int *arr);
int GetResult(int *arr);

int main()
{
    int *arr = (int *)malloc(3 * sizeof(int));
    GetNumbers(arr);

    printf("Result: %d\n", GetResult(arr));

    return 0;
}

void GetNumbers(int *arr)
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
    int result;

    if (arr[2]) // Compare 3 numbers
    {
        result = (arr[0] ^ arr[1]) ^ arr[2];
    }
    else // Compare 2 numbers
    {
        result = arr[0] ^ arr[1];
    }

    return result;
}