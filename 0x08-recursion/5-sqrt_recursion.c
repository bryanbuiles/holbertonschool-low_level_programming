#include "holberton.h"
int _squarefunction(int n, int i);

/**
 * factorial - entry point
 * @n: Number
 * Return: Factorial n
 */

int _sqrt_recursion(int n)
{
	if( n < 0 )
		return (-1);

	return (_squarefunction(n, 1));
}
	int _squarefunction(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (_squarefunction(n, i + 1));
	return (0);
}
