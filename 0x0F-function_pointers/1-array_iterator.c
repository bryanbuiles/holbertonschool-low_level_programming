#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - entry function
 * @action: FUnction name
 * @array:Person name
 * @size: SIze array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (action != NULL)
{
for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
}