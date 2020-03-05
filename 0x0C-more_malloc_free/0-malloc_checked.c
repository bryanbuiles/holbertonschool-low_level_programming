#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - entry point
 * @b: size
 * Return: Malloc pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(sizeof(unsigned int) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

