#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _FUNCS_H_
#define _FUNCS_H_

int Strlen(char *str1);
int Strnlen(char *str1, int max);
void Strcpy(char *str1, char *str2);
void Strncpy(char *str1, char *str2, int max);
void Strcat(char *str1, char *str2);
void Strncat(char *str1, char *str2, int max);
int Strcmp(char *str1, char *str2);
int Strncmp(char *str1, char *str2, int max);
char *Strstr(char *str1, char *str2);

#endif

#ifndef _TEST_FUNCS_H_
#define _TEST_FUNCS_H_

void TestStrlen();
void TestStrnlen();
void TestStrcpy();
void TestStrncpy();
void TestStrcat();
void TestStrncat();
void TestStrcmp();
void TestStrncmp();
void TestStrstr();

#endif