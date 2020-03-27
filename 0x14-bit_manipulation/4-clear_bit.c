#include "holberton.h"

/**
 * clear_bit - entry point
 * @n: pointer to integer
 * @index: index
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > (8 * sizeof(n)))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
