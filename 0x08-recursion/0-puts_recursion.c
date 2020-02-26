#include "holberton.h"

/**
 * _puts_recursion - entry point
 * @s: pointer
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] ==  '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[n]);
		_puts_recursion(s + 1);

	}
}


