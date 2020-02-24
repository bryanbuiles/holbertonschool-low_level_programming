#include "holberton.h"

/**
 * _strstr - entry point
 * @haystack: pointer
 * @needle: accept
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		for (; *h == *n && *n != '\0'; n++)
		{
			h++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
