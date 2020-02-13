#include "holberton.h"
/**
 * print_square - entry point
 *@size : parameter
 * Return: Always 0 (success)
 */
void print_square(int size)

{
int j;
int i;
if (size > 0)
for (i = 1 ; i <= size  ; i++)
{
for (j = 1 ; j <= size ; j++)
{
_putchar(35);
}
_putchar('\n');
}
else
_putchar('\n');
}
