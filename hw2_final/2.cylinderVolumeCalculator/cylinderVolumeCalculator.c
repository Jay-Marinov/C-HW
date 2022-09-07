#include "funcs.h"

int main()
{
    int option;
    struct Cylinder cylinder; // Create a cylinder
    printf("Choose option:\n1: Calculate volume of vertical cylinder\n2: Calculate volume of horizontal cylinder\nOption: ");
    scanf("%d", &option);

    switch (option) // Choose between vertical or horizontal position
    {
    case 1:
        GetInfo(&cylinder, option);                       // Get cylinder measurements
        if (cylinder.radius <= 0 || cylinder.height <= 0) // Check if cylinder measuraments are valid
        {
            fprintf(stderr, "Invalid cylinder measurements!\n");
            return EXIT_FAILURE;
        }
        printf("Volume of vertical cylinder: %lf cubic meters\n", CalculateVertical(cylinder.radius, cylinder.height)); // Prints liquid level in vertical cylinder
        break;

    case 2:
        GetInfo(&cylinder, option);                                               // Get cylinder measurements
        if (cylinder.radius <= 0 || cylinder.height <= 0 || cylinder.length <= 0) // Check if cylinder measuraments are valid
        {
            fprintf(stderr, "Invalid cylinder measurements!\n");
            return EXIT_FAILURE;
        }
        printf("Volume of horizontal cylinder: %lf cubic meters\n", CalculateHorizontal(cylinder.radius, cylinder.height, cylinder.length)); // Print liquid level in horizontal cylinder
        break;
    default:
        fprintf(stderr, "Wrong option!\n");
        return EXIT_FAILURE;
        break;
    }
    return EXIT_SUCCESS;
}
