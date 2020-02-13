#include "holberton.h"
/**
 * print_numbers - entry point
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
int n;
for (n = 0 ; n <= 9 ; n++)
{
_putchar(n + '0'); 
}
_putchar('\n');
}
