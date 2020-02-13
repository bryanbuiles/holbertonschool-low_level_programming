#include "holberton.h"
/**
  * print_line - entry point
  *@n : parameter
  * Return: Always 0 (success)
  */
void print_line(int n)
{
int j;
if (n > 0)
{
for (j = 1 ; j <= n ; j++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
