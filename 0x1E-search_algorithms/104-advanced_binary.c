#include "search_algos.h"

int advanced_binary2(int *array, size_t left, size_t right, int value);

/**
  * advanced_binary - advance binary search
  * @array: pointer to the first element of the array
  * @size: is the number of elements in array
  * @value: is the value to search for
  * Return: int (success)
  */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL && size == 0)
		return (-1);
	return (advanced_binary2(array, 0, size - 1, value));
}

/**
  * advanced_binary2 - advance binary search
  * @array: pointer to the first element of the array
  * @left: is the index most to left after to divide
  * @right: is the index most to rigth after to divide
  * @value: is the value to search for
  * Return: int (success)
  */

int advanced_binary2(int *array, size_t left, size_t right, int value)
{
	int i, j;
	size_t m;

	if (left > right)
		return (-1);

	printf("Searching in array: ");

	j = right;
	for (i = left; i <= j; i++)
	{
		if (i == j)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	m = (right + left) / 2;

	if (array[m - 1] == value && array[m] == value && array[m - 1] != 0)
		return (advanced_binary2(array, left, m, value));
	if (array[m] == value)
		return (m);
	if (value < array[m])
		return (advanced_binary2(array, left, m, value));
	else if (value > array[m])
		return (advanced_binary2(array, m + 1, right, value));

	return (-1);
}
