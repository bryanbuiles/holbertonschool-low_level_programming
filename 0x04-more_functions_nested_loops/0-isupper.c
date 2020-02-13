#include "holberton.h"
/**
  * _isupper - check lowercase
  * @c: first operand
  * Return: 1 is lowercase or 0 if not
  */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
