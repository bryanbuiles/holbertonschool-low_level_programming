#include "holberton.h"

/**
  * _strcmp - entry point
  * @s1: pointer
  * @s2: pointer
  * Return: always 0 (success)
 */

int _strcmp(char *s1, char *s2)
{

int i;
int r;
for (i = 0; s1[i] != s2[i]; i++)
{
r = (s1[i] - s2[i]);
return (r);
}
return (0);
}

