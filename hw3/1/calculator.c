#include <stdio.h>

int main()
{
    double num1, num2;
    char symbol;

    while (scanf("%lf %c %lf", &num1, &symbol, &num2) != EOF)
    {
        double sum;

        switch (symbol)
        {
        case '+':
            sum = num1 + num2;
            printf("%lf %c %lf = %.2lf\n", num1, symbol, num2, sum);
            break;

        case '-':
            sum = num1 - num2;
            printf("%lf %c %lf = %.2lf\n", num1, symbol, num2, sum);
            break;

        case '*':
            sum = num1 * num2;
            printf("%lf %c %lf = %.2lf\n", num1, symbol, num2, sum);
            break;

        case '/':
            sum = num1 / num2;
            printf("%lf %c %lf = %.2lf\n", num1, symbol, num2, sum);
            break;

        default:
            fprintf(stderr, "Invalid expression!\n");
            break;
        }
    }

    return 0;
}