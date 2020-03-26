#include "holberton.h"

/**
 * get_bit - entry point
 * @n: integer
 * @index: index
 * Return: Binary
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int gi, i;

	i = (n >> index);
	gi = i & 1;
	if ((gi == 1) || (gi == 0))
		return (gi);
	else
		return (-1);
}
