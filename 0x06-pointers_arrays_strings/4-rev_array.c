#include "holberton.h"
/**
  * reverse_array - entry point
  * @a: pointer
  * @n: number of elements
  * Return: no return (void)
  */

void reverse_array(int *a, int n)
{
	int t, h;

	for (t = 0; t < n; t++)
	{
	n--;
	h = a[t];
	a[t] = a[n];
	a[n] = h;
	}
}
