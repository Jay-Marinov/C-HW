#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"
#include "testFuncs.h"
#include <string.h>

int main()
{
    int endLoop = 1;
    int option;

    while (endLoop)
    {
        printf("____________________\nFunctions:\n1: strlen()\n2: strnlen()\n3: strcpy()\n4: strncpy()\n5: strcat()\n6: strncat()\n7: strcmp()\n8: strncmp()\n9: strstr()\n10: Exit\nChoose option: ");
        scanf("%d", &option);
        fgetc(stdin);
        putchar('\n');

        switch (option)
        {
        case 1:
            TestStrlen();
            break;
        case 2:
            TestStrnlen();
            break;
        case 3:
            TestStrcpy();
            break;
        case 4:
            TestStrncpy();
            break;
        case 5:
            TestStrcat();
            break;
        case 6:
            TestStrncat();
            break;
        case 7:
            TestStrcmp();
            break;
        case 8:
            TestStrncmp();
            break;
        case 9:
            TestStrstr();
            break;
        case 10:
            endLoop = 0;
            break;
        default:
            break;
        }
    }

    return 0;
}
