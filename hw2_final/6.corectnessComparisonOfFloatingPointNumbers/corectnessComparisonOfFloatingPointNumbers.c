#include "func.h"

int main()
{
    float num1[] = {10, 50, 100, 500, 1000, 5000, 10000, 15000, 20000, 50000}; // Test numbers
    int num1Size = sizeof(num1) / sizeof(num1[0]);
    float num2;
    float E[] = {0.00001f, 0.0001f, 0.001f, 0.01f, 0.1f}; // Different E values
    size_t ESize = sizeof(E) / sizeof(E[0]);              // Holds the size of the array
    float EAdaptive;

    for (int a = 0; a < ESize; a++) // Loop trough different E values
    {
        printf("*******************************\n\n");
        for (int j = 0; j < num1Size; j++) // Loop trough different test numbers
        {
            num2 = 0.0f;
            EAdaptive = E[a] * fmax(fabs(num1[j]), fabs(num2));
            for (int i = 0; i < num1[j] * 10; i++) // Equalize num2 with num1
            {
                num2 += 0.1f;
            }

            printf("Num1: %.8f\n", num1[j]);
            printf("Num2: %.8f\n", num2);

            if (CompareMethod1(num1[j], num2))
            {
                printf("No E: Num1 == Num2\n");
            }
            else
            {
                printf("No E: Num1 != Num2\n");
            }

            if (CompareMethod2(num1[j], num2, E[a]))
            {
                printf("Fixed E(%f): Num1 == Num2\n", E[a]);
            }
            else
            {
                printf("Fixed E(%f): Num1 != Num2\n", E[a]);
            }

            if (CompareMethod3(num1[j], num2, EAdaptive))
            {
                printf("Adaptive E(%f): Num1 == Num2\n", EAdaptive);
            }
            else
            {
                printf("Adaptive E(%f): Num1 != Num2\n", EAdaptive);
            }
            printf("\n\n");
        }
    }

    return EXIT_SUCCESS;
}
