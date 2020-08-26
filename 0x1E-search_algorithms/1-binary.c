#include "search_algos.h"

/**
  * binary_search - entry point
  * @array: pointer to the first element of the array
  * @size: is the number of elements in array
  * @value: is the value to search for
  * Return: int (success)
  */

int binary_search(int *array, size_t size, int value)
{
	int inferior, superior, m, i, j;

	inferior = 0;
	superior = size - 1;

	if (array == NULL && size == 0)
		return (-1);

	while (inferior <= superior)
	{
		printf("Searching in array: ");
		j = superior;
		for (i = inferior; i <= j; i++)
		{
			if (i == j)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		m = (superior + inferior) / 2;
		if (array[m] == value)
			return (m);
		/* es mayor que elvalor */
		if (array[m] > value)
			superior = (m - 1);
		else if (array[m] < value)
			inferior = m + 1;
	}
	return (-1);
}
