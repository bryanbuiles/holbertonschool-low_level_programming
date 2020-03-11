#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - entry function
 * @cmp: FUnction name
 * @array:Person name
 * @size: SIze array
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);
if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
	return (i);
}
return (-1);
}
