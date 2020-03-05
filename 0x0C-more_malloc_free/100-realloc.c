#include "holberton.h"
#include <stdlib.h>
/**
  * *_realloc - function that reallocates a memory block
  *  @old_size: is the size, in bytes, for ptr
  *  @ptr:  is a pointer to the memory previously allocated
  *  @new_size: is the new size, in bytes of the new memory block
  *  Return: Void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *nptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	for (i = 0 ; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (nptr);
}
