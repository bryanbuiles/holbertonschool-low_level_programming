#include "holberton.h"

/**
 * get_bit - entry point
 * @n: integer
 * @index: index
 * Return: Binary
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > (8 * sizeof(n) - 1))
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
