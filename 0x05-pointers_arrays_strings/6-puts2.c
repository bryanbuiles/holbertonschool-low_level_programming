#include "holberton.h"
/**
  * puts2 - entry point
  * @str: pointer
  * Return: Always 0 (success)
  */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
	if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
