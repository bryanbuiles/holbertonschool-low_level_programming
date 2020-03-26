#include "holberton.h"

/**
 * binary_to_uint - entry point
 * @b: pointer
 * Return: Decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unidad, dec = 0, i = 0, j = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	unsigned int n = atoi(b);

	while (n != 0)
	{
		unidad = n % 10;
		dec += unidad << j;
		n = n / 10;
		j++;
	}
	return (dec);
}
