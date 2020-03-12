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
else
{
return (_squarefunction(n, 1));
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
if (o /  2 < p) 
{
	return (-1);
}
else if (p * p == o)
{
return (p);
}
else
{
return (_squarefunction(o, p  + 1));
}
}
