#include "holberton.h"

/**
 * flip_bits - entry point
 * @n: number
 * @m: number
 * Return: 1
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			i++;
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
