#include "holberton.h"
/**
 * swap_int - entry point
 *@a: pointer a
 *@b: pointer b
 * Return: Always 0 (success)
 */
void swap_int(int *a,int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
