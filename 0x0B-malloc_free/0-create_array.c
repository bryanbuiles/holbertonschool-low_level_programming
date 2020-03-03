#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: size string
 * @c: char
 * Return: malloc (success)
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
	str[i] = c;
	}
	str[i] = '\0';
	return (str);
}

