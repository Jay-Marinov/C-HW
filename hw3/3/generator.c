#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    for (int i = 0; i < 3; i++)
    {
        printf("%f\n", ((float)rand() / (float)(1000000)) * 1);
    }

    return 0;
}
