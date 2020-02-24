#include "holberton.h"

/**
 * _strspn - entry point
 * @s: pointer
 * @accept: accept
 * Return: k
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;
	int i;
	int k = 0;

	for (j = 0; s[j] != ' ' && s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0' ; i++)
	{
		if (s[j] == accept[i])
		k++;
	}
	}
	return (k);
}
