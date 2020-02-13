#include "holberton.h"
/**
  * _isdigit - check lowercase
  * @c: first operand
  * Return: 1 is lowercase or 0 if not
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
