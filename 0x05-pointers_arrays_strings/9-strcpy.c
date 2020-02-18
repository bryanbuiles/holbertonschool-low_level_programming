#include "holberton.h"
/**
 * *_strcpy - entry point
 * @dest: pointer
 * @src: pointer
 * Return: Always 0 (success)
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int sum = 0;
	int j;

	for (; src[n] != '\0'; n++)
	{
		sum = sum + 1;
	}
	for (j = 0; j < sum; j++)
	{
	dest[j] = src[j];
	}
	dest[sum] = '\0';
	return (dest);
	return (src);
}

