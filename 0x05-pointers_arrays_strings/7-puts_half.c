#include "holberton.h"
/**
 * puts_half - entry point
 * @str: pointer
 * Return: Always 0 (success)
 */

void puts_half(char *str)
{
	int n, i, l;

	l = 0;
	for (n = 0; str[n] != '\0'; n++)
		l++;
	i = (l / 2);
	if ((l % 2) == 1)
		i = ((l + 1) / 2);
	for (n = i; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
