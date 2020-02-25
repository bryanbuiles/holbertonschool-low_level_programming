#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 * @a: Pointer
 * @size: size array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int total1 = 0;
	int total2 = 0;

	for (i = 0; i <= (size * size) ; i = (i + size + 1))
	{
		total1 = total1 + a[i];
	}
	for (j = size - 1; j <= (size * size) - size ; j = (j + size - 1))
	{
		total2 = total2 + a[j];
	}
	printf("%d, %d \n", total1, total2);

}
