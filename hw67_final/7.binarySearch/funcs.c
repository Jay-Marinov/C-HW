#include "funcs.h"

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue) // Perform binary search
{
    int start = 0, end = uArraySize - 1; // Set first and last index for the search

    while (start <= end) // Loop untill mid and high are equal (untill all elements are checked)
    {
        int mid = (start + end) / 2; // Calculate the middle point of the array

        if (uValue == pArray[mid]) // Searched value is found, exit loop
        {
            return mid;
        }
        else if (uValue < pArray[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return 0xFFFF; // Searched value is not found, exit loop
}