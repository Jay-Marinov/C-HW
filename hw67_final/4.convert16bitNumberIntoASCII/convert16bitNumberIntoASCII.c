#include "funcs.h"

int main()
{
    int16_t num;
    printf("Enter a number:\n");
    scanf("%hd", &num);

    char Buffer[100];

    Conv(num, Buffer);

    printf("String:\n%s\n", Buffer);

    return EXIT_SUCCESS;
}
