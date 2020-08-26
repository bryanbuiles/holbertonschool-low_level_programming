#include "search_algos.h"

/**
  * binary_search2 - entry point
  * @array: pointer to the first element of the array
  * @inicia: index to start in array
  * @size: is the number of elements in array
  * @value: is the value to search for
  * Return: int (success)
  */
int binary_search2(int *array, int inicia, size_t size, int value);
int binary_search2(int *array, int inicia, size_t size, int value)
{
	int inferior, superior, m, i, j;

	inferior = inicia;
	superior = size - 1;

	if (array == NULL || size == 0)
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
/**
  * exponential_search - exponencial search
  * @array: pointer to the first element of the array
  * @size: is the number of elements in array
  * @value: is the value to search for
  * Return: int (success)
  */

int exponential_search(int *array, size_t size, int value)
{
	int n, i, mitad;

	n = size - 1;
	i = 1;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[%i] = [%i]\n", 0, array[0]);
		return (0);
	}

	while (i <= n && array[i] <= value)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		i = i * 2;
		mitad = i / 2;
	}
	if (i > n)
		i = n;
	printf("Value found between indexes [%d] and [%d]\n", mitad, i);

	return (binary_search2(array, mitad, i + 1, value));
}
