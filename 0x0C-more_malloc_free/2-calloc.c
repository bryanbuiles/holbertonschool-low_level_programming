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
	void *str;
	int *a;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	a = malloc(size * nmemb);

	if (a == 0)
		return (NULL);
	str = a;

	for (i = 0; i < size; i++)
	{
		a[i] = 0;
	}
	return (str);
}
