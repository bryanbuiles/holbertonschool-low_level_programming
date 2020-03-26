#include "holberton.h"

/**
 * print_binary - entry point
 * @n: integer
 * Return: Binary
 */

void print_binary(unsigned long int n)
{
	int i = 0, j, k, temp;

	temp = n;
	if (n == 0)
	{
		_putchar('0');
	}
	while (temp != 0)
	{
		i++;
		temp = temp >> 1;
	}
	for (j = i - 1; j >= 0; j--)
	{
		k = n >> j;
		(k & 1) ? _putchar('1') : _putchar('0');
	}
}
