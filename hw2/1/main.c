#include <stdio.h>
#include <math.h>

float SimpleBMI(float weight, float height);
float AccurateBMI(float weight, float height);
void GetInfo(float *weight, float *height);

int main()
{
    int option;
    float weight, height;
    printf("Choose BMI calculator\n1: Simple BMI calculator\n2: Accurate BMI calculator\nSelect: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        GetInfo(&weight, &height);
        printf("Simple BMI: %.2f\n", SimpleBMI(weight, height));
        break;

    case 2:
        GetInfo(&weight, &height);
        printf("Accurate BMI: %.2f\n", AccurateBMI(weight, height));
        break;

    default:
        fprintf(stderr, "Wrong option\n");
        break;
    }

    return 0;
}

float SimpleBMI(float weight, float height)
{
    return weight / pow(height, 2);
}

float AccurateBMI(float weight, float height)
{
    return 1.3 * (weight / pow(height, 2.5));
}

void GetInfo(float *weight, float *height)
{
    printf("Please enter your weight (in kilograms): ");
    scanf("%f", *&weight);

    printf("Please enter your height (in meters): ");
    scanf("%f", *&height);
}
