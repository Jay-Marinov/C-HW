#include "funcs.h"

float SimpleBMI(float weight, float height) // Calculate BMI with simple formula
{
    return weight / pow(height, 2);
}

float AccurateBMI(float weight, float height) // Calculate BMI with accurate formula
{
    return 1.3 * (weight / pow(height, 2.5));
}

void GetInfo(float *weight, float *height) // Get user info (weight and height)
{
    printf("Please enter your weight (in kilograms): ");
    scanf("%f", *&weight);

    printf("Please enter your height (in meters): ");
    scanf("%f", *&height);
}