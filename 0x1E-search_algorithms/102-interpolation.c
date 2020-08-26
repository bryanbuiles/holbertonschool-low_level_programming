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
	size_t pos, low, high;

	low = 0;
	high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) /
					  (array[high] - array[low])) *
					 (value - array[low]));
		if (pos < low || pos > high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		/* es mayor que el valor */
		if (array[pos] > value)
			high = (pos - 1);
		else if (array[pos] < value)
			low = pos + 1;
	}
	return (-1);
}
