#include "holberton.h"

/**
 * _strspn - entry point
 * @s: pointer
 * @accept: accept
 * Return: k
 */

void print_chessboard(char (*a)[8])
{
	int i, b;
	for ( i = 0 ; i <= 7; i++)
	{
		for ( b = 0 ; b <= 7; b++)
		{
			_putchar(a[i][b]);
		}
	_putchar('\n');
	}
}
