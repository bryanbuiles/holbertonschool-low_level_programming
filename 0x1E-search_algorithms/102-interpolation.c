#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
  * interpolation_search - Search using interpolation
  * @array: pointer to the first element of the array
  * @size: is the number of elements in array
  * @value: is the value to search for
  * Return: int (success)
  */

int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	low = 0;
	high = size - 1;

	if (array == NULL || value == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{

		pos = low + (((double)(high - low) /
					  (array[high] - array[low])) *
					 (value - array[low]));
		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		/* es mayor que el valor */
		if (array[pos] > value)
			high = (pos - 1);
		else if (array[pos] < value)
			low = pos + 1;
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
