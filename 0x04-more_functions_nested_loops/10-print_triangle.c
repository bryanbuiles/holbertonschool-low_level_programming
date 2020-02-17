#include "holberton.h"
/**
 * print_triangle - entry point
 * @size: parameter
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
int j;
int i;
int l;
if (size > 0)
for (i = 0 ; i <= (size - 1) ; i++)
{
for (j = 1 ; j <= (size - i) - 1 ; j++)
{
_putchar(' ');
}
for (l = 0; l <= i; l++)
{
_putchar(35);
}
_putchar('\n');
}
else
_putchar('\n');
}
