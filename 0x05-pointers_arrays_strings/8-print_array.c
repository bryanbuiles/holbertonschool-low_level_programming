#include "holberton.h"
#include <stdio.h>
/**
 * print_array - entry point
 * @a : pointer
 * @n : n elements array
 * Return: Always 0 (success)
 */

void print_array(int *a, int n)
{

int j;
for (j = 0; j < (n - 1) ; j++)
printf("%d, ", a[j]);
if (j == (n - 1))
printf("%d", a[n - 1]);
printf("\n");
}
