#include "holberton.h"
/**
 * print_diagonal - entry point
 *@n : parameter
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
int j;
int i;
if (n > 0)
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < i ; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
else
_putchar('\n');
}

