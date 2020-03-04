#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - entry point
 * @width: size string
 * @height: char
 * Return: malloc (success)
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
			for (i = 0; i < height; i++)
			{
				ptr[i] = malloc(sizeof(int) * width);
				if (ptr == NULL)
				{
				for (i = 0; i < height; i++)
				{
					free(ptr[i]);
					free(ptr);
					return (NULL);
				}
				}
				for (j = 0; j < width; j++)
				{
					ptr[i][j] = 0;
				}
			}
	return (ptr);
}
