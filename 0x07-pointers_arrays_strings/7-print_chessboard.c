#include "holberton.h"

/**
 * print_chessboard - entry point
 * @a: pointer
 * Return:  0
 */

void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0 ; i <= 7; i++)
	{
		for (b = 0 ; b <= 7; b++)
		{
			_putchar(a[i][b]);
		}
	_putchar('\n');
	}
}
