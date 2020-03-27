#include "holberton.h"

/**
 * set_bit - entry point
 * @n: integer
 * @index: index
 * Return: Binary
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > (8 * sizeof(n) - 1))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
