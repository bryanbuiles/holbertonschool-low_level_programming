#include "holberton.h"

/**
* _islower : check lowercase
*
* Return: 1 is lowercase or 0 if not
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
