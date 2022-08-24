#include <stdio.h>
#include <string.h>

int Sum(int *arr, int length);

int main()
{
    int arr[] = {12, 34, 5, 70};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Sum of array elements: %d\n", Sum(arr, length));

    return 0;
}

int Sum(int *arr, int length)
{
    char string[100];
    int count = 0;
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        char temp[100];
        sprintf(temp, "%d", arr[i]);
        strcat(string, temp);
    }

    while (string[count] != '\0')
    {
        char temp[2];
        temp[0] = string[count];
        temp[1] = '\0';
        int num;
        sscanf(temp, "%d", &num);
        sum += num;
        count++;
    }

    return sum;
}