#include <stdio.h>
#define MAX(a, b, c) ((a > b && a > c) ? a : (b > c) ? b \
                                                     : c)
#define MIN(a, b, c) ((a < b && a < c) ? a : (b < c) ? b \
                                                     : c)

int main()
{
    int num1, num2, num3;
    printf("Num1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);
    printf("Num3: ");
    scanf("%d", &num3);

    printf("Biggest: %d\n", MAX(num1, num2, num3));
    printf("Smallest: %d\n", MIN(num1, num2, num3));
    return 0;
}