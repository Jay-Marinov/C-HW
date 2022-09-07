#include "funcs.h"

int main()
{
    int option;
    float weight, height;
    printf("BMI calculators:\n1: Simple BMI calculator\n2: Accurate BMI calculator\nSelect: ");
    scanf("%d", &option);

    switch (option) // Switch between simple and accurate BMI calculators
    {
    case 1:
        GetInfo(&weight, &height);      // Get user info (weight and height)
        if (weight <= 0 || height <= 0) // Check if weight and height are valid values
        {
            fprintf(stderr, "Invalid weight or height value!\n");
            return EXIT_FAILURE;
        }
        printf("Simple BMI: %.2f\n", SimpleBMI(weight, height)); // Print simple BMI
        break;

    case 2:
        GetInfo(&weight, &height);      // Get user info (weight and height)
        if (weight <= 0 || height <= 0) // Check if weight and height are valid values
        {
            fprintf(stderr, "Invalid weight or height value!\n");
            return EXIT_FAILURE;
        }
        printf("Accurate BMI: %.2f\n", AccurateBMI(weight, height)); // Print accurate BMI
        break;

    default:
        fprintf(stderr, "Wrong option!\n");
        return EXIT_FAILURE;
        break;
    }

    return EXIT_SUCCESS;
}
