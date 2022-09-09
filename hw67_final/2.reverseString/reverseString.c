#include "funcs.h"

int main()
{
    char str[100]; // Store the string

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0'; // Remove new line from fgets

    printf("Before reverse: %s\n", str); // Print he original string
    Reverse(str);                        // Reverse the string
    printf("After reverse: %s\n", str);  // Print the reversed string
    return EXIT_SUCCESS;
}
