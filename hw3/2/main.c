#include <stdio.h>
#include <math.h>

double CalculateVertical();
double CalculateHorizontal();

int main()
{
    int option;
    printf("Choose option:\n1: Calculate volume of vertical cylinder\n2: Calculate volume of horizontal cylinder\nOption: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Volume of vertical cylinder: %lf cubic meters\n", CalculateVertical());
        break;

    case 2:
        printf("Volume of horizontal cylinder: %lf cubic meters\n", CalculateHorizontal());
        break;
    default:
        fprintf(stderr, "Wrong option\n");
        break;
    }
    return 0;
}

double CalculateVertical()
{
    double radius, height;

    printf("Select radius (in meters): ");
    scanf("%lf", &radius);

    printf("Select height (in meters): ");
    scanf("%lf", &height);

    double result = M_PI * pow(radius, 2) * height;

    return result;
}

double CalculateHorizontal()
{

    double radius, height, length;

    printf("Select radius (in meters): ");
    scanf("%lf", &radius);

    printf("Select height (in meters): ");
    scanf("%lf", &height);

    printf("Select length (in meters): ");
    scanf("%lf", &length);

    double area = acos((radius - height) / radius) * pow(radius, 2) - ((radius - height) * sqrt((2 * radius * height) - pow(height, 2)));

    return area * length;
}