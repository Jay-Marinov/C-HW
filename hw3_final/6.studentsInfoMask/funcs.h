#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#ifndef _FUNCS_H_
#define _FUNCS_H_

void PrintMask(uint64_t mask);
void HandleAttendance(uint64_t *mask, int option);
void HandleShowAttendance(uint64_t mask, int option);

#endif