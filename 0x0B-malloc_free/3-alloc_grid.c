#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - entry point
 * @width: size string
 * @height: char
 * Return: malloc (success)
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, j = 0, q = 0;

	if (width <= 0 && height <= 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);
	if (!ptr)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		if (!ptr)
		{
			for (q = 0; q <= i; q++)
			{
				free(ptr[q]);
			}
			free(ptr);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
