#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * fre_grid - entry point
 * @grid: size string
 * @height: chars
 * Return: Void (success)
 */

void free_grid(int **grid, int height)
{
int q;

if (grid != NULL || height != 0)
{
for (q = 0; q < height; q++)
{
free(grid[q]);
}
free(grid);
}
}
