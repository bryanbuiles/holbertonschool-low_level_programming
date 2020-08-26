#include "search_algos.h"

/**
  * linear_search - entry point
  * @array: pointer to the first element of the array
  * @size: is the number of elements in array
  * @value: is the value to search for
  * Return: int (success)
  */

int linear_search(int *array, size_t size, int value)
{
	int i, j;

	j = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i <= j; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
