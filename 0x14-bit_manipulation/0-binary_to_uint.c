#include "holberton.h"

/**
 * binary_to_uint - entry point
 * @b: pointer
 * Return: Decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int unidad = 1, i = 0;

	if (b == NULL)
		return (0);
	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (i >= 0)
	{
		dec += ((b[i] - '0') * unidad);
		unidad *= 2;
		i--;
	}
	return (dec);
}
