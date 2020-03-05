#include "holberton.h"
#include <stdlib.h>


/**
  * *_calloc - entry point
  * @size: size string
  * @nmemb: char
  * Return: malloc (success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(size * nmemb);

	if (str == 0)
		return (NULL);
		for (i = 0; i < (size * nmemb); i++)
	{
		str[i] = 0;
	}
	return (str);
}
