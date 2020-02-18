#include "holberton.h"
/**
 * print_rev - entry point
 * @s: pointer
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
int n, j, i;
j = 0;
for (n = 0; s[n] != '\0'; n++)
{
j += 1;
}
for (i = (j - 1) ; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
