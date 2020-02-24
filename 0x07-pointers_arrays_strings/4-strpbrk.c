#include "holberton.h"

/**
  * _strpbrk - entry point
  * @s: pointer
  * @accept: accept
  * Return: s
  */

char *_strpbrk(char *s, char *accept)
{
	int j;
	int i;


	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0' ; i++)
		{
			if (s[j] == accept[i])
			{
			s = &s[j];
			return (s);
			}
			else if (s[j] == 0)
			s = '\0';
		}
	}
	return (s);
}
