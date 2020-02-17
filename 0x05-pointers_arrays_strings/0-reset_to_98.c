#include "holberton.h"
/**
 * reset_to_98 - entry point
 *@n : pointer
 * Return: Always 0 (success)
 */
void reset_to_98(int *n)
{
int *p;
p = &*n;
*p = 98;
}
