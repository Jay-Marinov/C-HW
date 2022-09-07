#include "funcs.h"

int Strlen(char *str1) // Implementation of strlen() function
{
    int length = 0;
    int count = 0;

    while (str1[count])
    {
        length++;
        count++;
    }

    return length;
}

int Strnlen(char *str1, int max) // Implementation of strnlen() function
{
    int length = 0;
    int count = 0;

    while (str1[count])
    {
        length++;
        count++;
    }

    if (length > max)
    {
        return max;
    }

    return length;
}

void Strcpy(char *str2, char *str1) // Implementation of strcpy() function
{
    int count = 0;

    while (str1[count])
    {
        str2[count] = str1[count];
        count++;
    }

    str2[count] = '\0';
}

void Strncpy(char *str2, char *str1, int max) // Implementation of strncpy() function
{
    int count = 0;

    while (str1[count])
    {
        str2[count] = str1[count];
        count++;
        if (count == max)
        {
            str2[max] = '\0';
            break;
        }
    }

    str2[count] = '\0';
}

void Strcat(char *str1, char *str2) // Implementation of strcat() function
{
    int count1 = 0;
    int count2 = 0;

    while (str1[count1])
    {
        count1++;
    }

    while (str2[count2])
    {
        count2++;
    }

    for (int i = 0; i < count2; i++)
    {
        str1[count1 + i] = str2[i];
    }
    str1[count1 + count2] = '\0';
}

void Strncat(char *str1, char *str2, int max) // Implementation of strncat() function
{
    int count1 = 0;
    int count2 = 0;

    while (str1[count1] != '\0')
    {
        count1++;
    }

    while (str2[count2] != '\0')
    {
        count2++;
    }

    for (int i = 0; i < count2; i++)
    {
        str1[count1 + i] = str2[i];
        if (i + 1 == max)
        {
            break;
        }
    }

    str1[count1 + max] = '\0';
}

int Strcmp(char *str1, char *str2) // Implementation of strcmp() function
{
    int count1 = 0;
    int count2 = 0;

    while (str1[count1] != '\0')
    {
        count1++;
    }

    while (str2[count2] != '\0')
    {
        count2++;
    }

    if (count1 != count2)
    {
        return 0;
    }

    for (int i = 0; i < count1; i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
    }

    return 1;
}

int Strncmp(char *str1, char *str2, int max) // Implementation of strncmp() function
{

    int count1 = 0;
    int count2 = 0;
    int i = 0;

    while (str1[count1] != '\0')
    {
        count1++;
    }

    while (str2[count2] != '\0')
    {
        count2++;
    }

    for (int i = 0; i < max; i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }

        if (i == count1 || i == count2)
        {
            break;
        }
    }

    return 1;
}

char *Strstr(char *str1, char *str2) // Implementation of strstr() function
{
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    char *ptr = NULL;

    while (str1[count1] != '\0')
    {
        count1++;
    }

    while (str2[count2] != '\0')
    {
        count2++;
    }

    for (int i = 0; i < count1; i++)
    {
        if (str1[i] == str2[0])
        {
            count3 = 0;
            for (int j = 0; j < count2; j++)
            {
                if (str1[i + j] == str2[j])
                {
                    count3++;
                }
            }
            if (count3 == count2)
            {
                ptr = &str1[i];
                break;
            }
        }
    }

    return ptr;
}