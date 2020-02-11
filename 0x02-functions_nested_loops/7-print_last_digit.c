#include "holberton.h"
/**
 * print_last_digit - last digit
 * @n: first operand
 *
 * Return: 1 is lowercase or 0 if not
 */
int print_last_digit(int n)
{
int ld;
ld = (n % 10);
if (n < 0)
ld = (-1 * ld);
_putchar (ld + '0');
return (ld);
}
