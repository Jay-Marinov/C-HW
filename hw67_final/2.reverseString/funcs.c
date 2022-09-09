#include "funcs.h"

void Reverse(char *ptr) // Reverse string function
{
    size_t strSize = strlen(ptr); // Holds the size of the string
    char temp;

    for (int i = 0; i < strSize / 2; i++) // Switch string characters
    {
        temp = ptr[i];
        ptr[i] = ptr[strSize - i - 1];
        ptr[strSize - i - 1] = temp;
    }
}