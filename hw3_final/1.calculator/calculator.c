#include "funcs.h"

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
            sum = Add(num1, num2); // Get the result from adding num1 and num2
            printf("%lf %c %lf = %.2lf\n", num1, symbol, num2, sum);
            break;

        case '-':
            sum = Subtrac(num1, num2); // Get the result from subtracting num2 from num1
            printf("%lf %c %lf = %.2lf\n", num1, symbol, num2, sum);
            break;

        case '*':
            sum = Multiplicate(num1, num2); // Get the result from multiplicating num1 with num2
            printf("%lf %c %lf = %.2lf\n", num1, symbol, num2, sum);
            break;

        case '/':
            sum = Divide(num1, num2); // Get the result from dividing num1 with num2
            printf("%lf %c %lf = %.2lf\n", num1, symbol, num2, sum);
            break;

        default:
            fprintf(stderr, "Invalid expression!\n");
            return EXIT_FAILURE;
            break;
        }
    }

    return EXIT_SUCCESS;
}