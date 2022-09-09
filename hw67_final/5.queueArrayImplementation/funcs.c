#include "funcs.h"

void Push(int arr[], int *bottom, int *top, int x) // Function that adds num at the top of the queue
{
    if (!isFull(*top))
    {
        return;
    }

    if ((*top + 1) % MAX_SIZE == *bottom)
    {
        return;
    }
    else if (!isEmpty(*bottom, *top))
    {
        *bottom = 0;
        *top = 0;
    }
    else
    {
        *top = (*top + 1) % MAX_SIZE;
    }
    arr[*top] = x;
}

int Pop(int arr[], int *bottom, int *top) // Function that removes num from the bottom of the queue
{
    int temp = arr[*bottom];

    if (!isEmpty(*bottom, *top))
    {
        return 0;
    }
    else if (*bottom == *top)
    {
        *bottom = -1;
        *top = -1;
    }
    else
    {
        *bottom = (*bottom + 1) % MAX_SIZE;
    }
    return temp;
}

int isFull(int top) // Function that checks if queue is full
{
    if (top == MAX_SIZE - 1)
    {
        return 0;
    }

    return 1;
}

int isEmpty(int bottom, int top) // Function that checks if queue is empty
{
    if (bottom == -1 && top == -1)
    {
        return 0;
    }
    return 1;
}

void PrintArray(int arr[]) // Function that prints the queue
{
    printf("Current array: ");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}