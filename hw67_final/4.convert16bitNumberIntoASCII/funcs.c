#include "funcs.h"

void Conv(int sValue, char *pBuffer) // Takes signed 16 bit number and convert it to ASCII null terminated string
{
    char positive = 1; // If input is positive number - 1, if negative - 0
    if (sValue < 0)    // Check if input is negative
    {
        positive = 0;
    }
    sValue = abs(sValue); // Get the absolute value of the input

    char str[100];
    sprintf(str, "%hd", sValue); // Convert input into string

    if (positive) // // Add ' ' infront of the string (buffer) and add enough whitespaces to make a string with 6 symbols (If input is a positive number)
    {
        strcat(pBuffer, " ");
        for (int i = 0; i < 5 - strlen(str); i++)
        {
            strcat(pBuffer, " ");
        }
    }
    else // Add '-' infront of the string (buffer) and add enough whitespaces to make a string with 6 symbols (If input is a negative number)
    {
        strcat(pBuffer, "-");
        for (int i = 0; i < 5 - strlen(str); i++)
        {
            strcat(pBuffer, " ");
        }
    }

    strcat(pBuffer, str); // Concat the absolute value to the string (buffer)
}