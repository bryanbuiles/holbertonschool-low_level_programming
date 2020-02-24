#include "holberton.h"

/**
 * _memset - entry point
 * @s: pointer
 * @b: constant
 * @n:  bytes
 * Return: po
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; i < n ; i++)
{
	s[i] = b;
}
return (s);
}
