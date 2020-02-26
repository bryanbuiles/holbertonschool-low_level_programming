#include "holberton.h"

/**
 * _puts_recursion - entry point
 * @s: pointer
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int n = 0;

	_putchar(s[n]);

	if (s[n] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_puts_recursion(s + (n + 1));
	}
}


