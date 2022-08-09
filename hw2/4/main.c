#include <stdio.h>
#include <stdlib.h>

void GetNumbers(int *arr);
int GetResult(int *arr);

int main()
{
    int *arr = (int *)malloc(3 * sizeof(int));
    GetNumbers(arr);

    printf("Result: %d\n", GetResult(arr));
    free(arr);

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
    int result = (!arr[0] && arr[1]) || (arr[0] && !arr[1]); // Compare 2 numbers

    if (arr[2]) // Compare 3 numbers
    {
        result = (!result && arr[2]) || (result && !arr[2]);
    }

    return result;
}