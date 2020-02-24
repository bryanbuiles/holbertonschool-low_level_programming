#include "holberton.h"

/**
  * _memcpy - entry point
  * @dest: pointer
  * @src: pointer
  * @n: variable
  * Return: Always 0 (success)
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
