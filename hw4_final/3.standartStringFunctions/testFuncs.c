#include "funcs.h"

// Test functions (used for calling str functions with correct values and printing the resutls)

void TestStrlen() // Test function for strlen()
{
    char str[100];
    int len;

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';

    len = Strlen(str);
    printf("String length: %d\n", len);
}

void TestStrnlen() // Test function for strnlen()
{
    char str[100];
    int max;
    int nlen;

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter a maximum string size: ");
    scanf("%d", &max);

    nlen = Strnlen(str, max);
    printf("String length: %d\n", nlen);
}

void TestStrcpy() // Test function for strcpy()
{
    char str1[100];
    char str2[100];

    printf("Enter a string: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0';

    Strcpy(str2, str1);
    printf("String copy: %s\n", str2);
}

void TestStrncpy() // Test function for strncpy()
{
    char str1[100];
    char str2[100];
    int max;

    printf("Enter a string: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0';
    printf("Enter how many symbols to be coppied: ");
    scanf("%d", &max);

    Strncpy(str2, str1, max);
    printf("String copy: %s\n", str2);
}

void TestStrcat() // Test function for strcat()
{
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0';

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strlen(str2) - 1] = '\0';
    putchar('\n');

    Strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

void TestStrncat() // Test function for strncat()
{
    char str1[100];
    char str2[100];
    int max;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0';

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strlen(str2) - 1] = '\0';
    putchar('\n');

    printf("Enter how many symbols to be concatenated: ");
    scanf("%d", &max);

    Strncat(str1, str2, max);
    printf("Concatenated string: %s\n", str1);
}

void TestStrcmp() // Test function for strcmp()
{
    char str1[100];
    char str2[100];
    int cmp;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0';

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strlen(str2) - 1] = '\0';
    putchar('\n');

    cmp = Strcmp(str1, str2);
    if (cmp)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
}

void TestStrncmp() // Test function for strncmp()
{
    char str1[100];
    char str2[100];
    int max;
    int ncmp;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0';

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strlen(str2) - 1] = '\0';
    putchar('\n');

    printf("Enter how many symbols to be compared ");
    scanf("%d", &max);

    ncmp = Strncmp(str1, str2, max);
    if (ncmp)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
}

void TestStrstr() // Test function for strstr()
{
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0';

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strlen(str2) - 1] = '\0';
    putchar('\n');

    printf("Address: %p\n", Strstr(str1, str2));
}