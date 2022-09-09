#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 10 // Queue size

#ifndef _FUNCS_H_
#define _FUNCS_H_

void Push(int arr[], int *bottom, int *top, int x);
int Pop(int arr[], int *bottom, int *top);
int isFull(int bottom, int top);
int isEmpty(int bottom, int top);
void PrintArray(int arr[]);

#endif