#include "holberton.h"
/**
 * print_alphabet - entry point
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
int lo;
for (lo = 'a' ; lo <= 'z' ; lo++)
{
_putchar(lo);
}
_putchar('\n');
}
