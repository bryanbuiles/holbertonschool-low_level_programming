#include "search_algos.h"

/**
  * jump_search - search jumping in blocks
  * @array: pointer to the first element of the array
  * @size: is the number of elements in array
  * @value: is the value to search for
  * Return: int (success)
  */

int jump_search(int *array, size_t size, int value)
{
	int i, j, jump, temp;

	j = size - 1;
	if (array == NULL || size == 0)
		return (-1);
	jump = sqrt(size);

	for (i = 0; i <= j; i += jump)
	{
		if (array[i] >= value)
		{
			temp = i - jump;
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%d] and [%d]\n", i - jump, i);
	if (i >= j)
	{
		temp = i - jump;
		i = j;
	}
	while (temp <= i)
	{
		printf("Value checked array[%d] = [%d]\n", temp, array[temp]);
		if (array[temp] == value)
			return (temp);
		temp++;
	}
	return (-1);
}
