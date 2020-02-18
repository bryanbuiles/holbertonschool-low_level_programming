#include "holberton.h"
/**
  * _puts - entry point
  * @str: pointer
  * Return: Always 0 (success)
  */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
	_putchar(str[n]);
	}
	_putchar('\n');
	}
