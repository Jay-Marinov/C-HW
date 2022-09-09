#include "funcs.h"

int main()
{
    char p1[100], p2[100], result[100];

    printf("Enter first number: ");
    fgets(p1, 100, stdin);
    p1[strlen(p1) - 1] = '\0'; // Remove new line from fgets

    printf("Enter second number: ");
    fgets(p2, 100, stdin);
    p2[strlen(p2) - 1] = '\0'; // Remove new line from fgets

    Add(p1, p2, result); // Calculate the sum of p1 and p2 and write it in result

    if (strcmp(result, "err1") == 0) // First number is not a positive number
    {
        fprintf(stderr, "First and second numbers are not a positive numbers!\n");
        return EXIT_FAILURE;
    }

    if (strcmp(result, "err2") == 0) // Second number  is not a positive number
    {
        fprintf(stderr, "First number is not a positive number!\n");
        return EXIT_FAILURE;
    }

    if (strcmp(result, "err3") == 0) // First and second number are not a positive numbers
    {
        fprintf(stderr, "Second number is not a positive number\n");
        return EXIT_FAILURE;
    }

    printf("Result: %s + %s = %s\n", p1, p2, result);

    return EXIT_SUCCESS;
}
