#include <stdio.h>
#define SWAP(a, b) a ^= b ^= a ^= b // swap the value of two integers

int main()
{
    int num1, num2;
    printf("Num1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);

    printf("Before swap: Num1 = %d, Num2 = %d\n", num1, num2);
    SWAP(num1, num2);
    printf("After swap: Num1 = %d, Num2 = %d\n", num1, num2);
    return 0;
}