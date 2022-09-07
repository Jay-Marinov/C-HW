#include "func.h"

int CompareMethod1(float num1, float num2) // Compare without E
{
    int result = num1 == num2;
    return result;
}

int CompareMethod2(float num1, float num2, float E) // Compare with fixed E
{
    int result = fabs(num1 - num2) < E;
    return result;
}

int CompareMethod3(float num1, float num2, float EAdaptive) // Compare with adaptive E
{
    int result = fabs(num1 - num2) < EAdaptive;
    return result;
}