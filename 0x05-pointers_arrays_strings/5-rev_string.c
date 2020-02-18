#include "holberton.h"
/**
 * rev_string - entry point
 * @s: pointer
 * Return: Always 0 (success)
 */

void rev_string(char *s)
{
	int n, j, i;

	for (n = 0; s[n] != '\0'; n++)
	{
	}
	for (i = 0 ; i < n; i++)
	{
		n--;
		j = s[i];
		s[i] = s[n];
		s[n] = j;
	}
}
