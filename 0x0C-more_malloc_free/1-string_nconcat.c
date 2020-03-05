#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - entry point
 * @s1: pointer
 * @s2: pointer
 * @n: size
 * Return: p (success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i;
	char *p;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0' ; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j <= n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
