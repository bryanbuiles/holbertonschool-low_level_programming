#include "holberton.h"

/**
  * _strchr - entry point
  * @s: pointer
  * @c: variable
  * Return: s
  */

char *_strchr(char *s, char c)
{
	int j;
	int i;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	for (i = 0; i <= j ; i++)
	{
		if (s[i] == c)
		{
		s = &s[i];
		break;
		}
		else if (s[i] == 0)
		s = '\0';
	}
		return (s);
}
