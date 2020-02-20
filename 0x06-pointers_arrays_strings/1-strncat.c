#include "holberton.h"

/**
 * *_strncat - entry point
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: Always 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;

	int j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}
	for (; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	if (j == (n - 1))
		break;
	}
	dest[i] = '\0';
	return (dest);
}
