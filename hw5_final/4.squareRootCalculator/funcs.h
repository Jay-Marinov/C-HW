#include <stdio.h>
#include <stdlib.h>

#ifndef _FUNCS_H_
#define _FUNCS_H_

#define ABS(n) (((n) < 0) ? -(n) : (n)) // Return the absolute value of a number
#define TOL 0.001                       // Tolerance

double SquareRoot(double x);

#endif