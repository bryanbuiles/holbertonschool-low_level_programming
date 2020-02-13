#include "holberton.h"
/**
  * more_numbers - entry point
  *
  * Return: Always 0 (success)
  */
void more_numbers(void)
{
int lo;
int i;
for (i = 0 ; i < 10 ; i++)
{
for (lo = 0 ;  lo <= 14 ; lo++)
{
if (lo > 9)
{
_putchar(lo / 10 + '0');
}
_putchar(lo % 10 + '0');
}
_putchar('\n');
}
}
