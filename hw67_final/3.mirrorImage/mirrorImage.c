#include "funcs.h"

int main()
{
    unsigned char Image[8] = {0x7F, 0x40, 0x40, 0x40, 0x7F, 0x00, 0x00, 0x00}; // Original Image

    VMirror(Image); // Create a mirror coppy of the original Image

    return EXIT_SUCCESS;
}