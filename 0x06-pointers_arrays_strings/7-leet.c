#include "holberton.h"

/**
 * leet - entry point
 * @po: pointer
 * Return: po
 */

char *leet(char *po)
{
int p[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int r[] = {'4', '3', '0', '7', '1'};
int i, j;

for (i = 0; po[i] != '\0'; i++)
{
for (j = 0; j <= 9 ; j++)
{
if (po[i] == p[j])
{
po[i] = r[j / 2];
j = 9;
}
}
}
return (po);
}
