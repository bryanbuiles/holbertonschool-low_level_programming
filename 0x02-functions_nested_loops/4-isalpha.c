#include "holberton.h"

/**
 * _isalpha - check alphabetic character
 * @c: first operand
 *
 * Return: 1 is lowercase or 0 if not
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
