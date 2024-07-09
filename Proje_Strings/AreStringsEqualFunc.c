#include <stdint.h>
#include "head.h"

char line1[100];
char line2[100];
void ifEqual(char *line1, char *line2)
{

    uint8_t i = 0;
    uint16_t check = 0;
    uint16_t L1, L2;
    L1 = 100;
    L2 = 100;

    while (L1 > 99 || L2 > 99)
    {
        L1 = 0;
        L2 = 0;
        printf("Enter the first line: ");
        gets(line1);

        printf("\nEnter the second line: ");
        gets(line2);

        while (line1[i] != '\0')
        {
            L1++;
            i++;
        }
        i = 0;

        while (line2[i] != '\0')
        {
            L2++;
            i++;
        }
        i = 0;

        if (L1 > 99 || L2 > 99)
            printf("\n\nPLease enter lines as shorter than 100 characters! \n");
    }

    if (L1 == L2)
    {
        while (i < L1)
        {
            if (line1[i] != line2[i])
                check++;

            i++;
        }
        if (check == 0)
            printf("They are equal.");
    }

    if (L1 != L2 || check != 0)
        printf("They are not equal.");
}