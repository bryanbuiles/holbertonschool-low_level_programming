#include "holberton.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
int lo;
int i;
for (i = 0 ; i < 10 ; i++)
{
for (lo = 'a' ; lo <= 'z' ; lo++)
{
_putchar(lo);
}
_putchar('\n');
}
}
