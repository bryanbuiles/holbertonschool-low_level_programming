#include "holberton.h"
int _squarefunction(int o, int p);
/**
 * _sqrt_recursion - entry point
 * @n: Number
 * Return: n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
{
return (_squarefunction(n, (n + 1) / 2));
}
}
/**
 * _squarefunction - second function
 * @o: variable
 * @p: second variable
 * Return: square root of a number
 */
int _squarefunction(int o, int p)
{
if (p < 1)
return (-1);
else if (p * p == o)
{
return (p);
}
else
{
return (_squarefunction(o, p - 1));
}
}
