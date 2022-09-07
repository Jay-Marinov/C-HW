#include "funcs.h"

double CalculateVertical(double radius, double height) // Calculate liquid level in vertical cylinder
{
    double result = M_PI * pow(radius, 2) * height;
    return result;
}

double CalculateHorizontal(double radius, double height, double length) // Calculate liquid level in horizontal cylinder
{
    double area = acos((radius - height) / radius) * pow(radius, 2) - ((radius - height) * sqrt((2 * radius * height) - pow(height, 2)));
    return area * length;
}

void GetInfo(struct Cylinder *cylinder, int option) // Get cylinder info
{
    if (option == 1) // Get vertical cylinder measurements
    {
        printf("Select radius (in meters): ");
        scanf("%lf", &cylinder->radius);

        printf("Select height (in meters): ");
        scanf("%lf", &cylinder->height);
    }

    if (option == 2) // Get horizontal cylinder measurements
    {
        printf("Select radius (in meters): ");
        scanf("%lf", &cylinder->radius);

        printf("Select height (in meters): ");
        scanf("%lf", &cylinder->height);

        printf("Select length (in meters): ");
        scanf("%lf", &cylinder->length);
    }
}