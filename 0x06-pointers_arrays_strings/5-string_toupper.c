#include "holberton.h"

/**
  * *string_toupper - entry point
  * @p: pointer
  *
  * Return: pointer p
 */

char *string_toupper(char *p)
{

int i = 0;

for (; p[i] != '\0'; i++)
if (p[i] >= 'a' && p[i] <= 'z')
{
p[i] = (p[i] - 32);
}
return (p);
}
