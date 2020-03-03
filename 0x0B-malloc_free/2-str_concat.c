#include "holberton.h"
#include <stdlib.h>

/**
  * *str_concat - entry point
  * @s1: pointer
  * @s2: pointer
  * Return: p (success)
 */

char *str_concat(char *s1, char *s2)
{

	int i;
	char *p;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	p = malloc(sizeof(char) * (i + j + 1));
			if (p == NULL)
			return (NULL);
			for (i = 0; s1[i] != '\0'; i++)
			p[i] = s1[i];
			for (j = 0; s2[j] != '\0'; j++)
			{
			p[i] = s2[j];
			i++;
			}
			p[i] = '\0';
			return (p);
}
