#include "holberton.h"

/**
 * _print_rev_recursion - entry point
 * @s: pointer
 * Return: 0
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')

		_print_rev_recursion(s + 1);

	else
		return;
	_putchar(*s);
}
