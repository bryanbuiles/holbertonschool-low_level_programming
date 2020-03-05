#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - entry point
 * @min: Min of elements
 * @max: Max of elements
 * Return: malloc (success)
*/

int *array_range(int min, int max)
{
	int *a;
	int i;
	int s = 0;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));

	if (a == 0)
		return (NULL);
	for (i = min; i <= max; s++, i++)
	{
		a[s] = i;
	}
	return (a);
}

