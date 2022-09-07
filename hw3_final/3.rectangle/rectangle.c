#include "funcs.h"

int main()
{
    double w, h, S, P; //// w,h - rectangle width and height; S - rectangle area; P - rectangle perimeter

    while (scanf("%lf %lf", &w, &h) != EOF)
    {
        Rectangle(w, h, &S, &P);
        printf("\n");
    }

    return 0;
}
