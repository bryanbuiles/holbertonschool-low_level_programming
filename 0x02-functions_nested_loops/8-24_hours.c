#include "holberton.h"
/**
* jack_bauer - less  more or zero
*
*
* Return: alwaays (0)
*/
void jack_bauer(void)
{
int ho;
int mi;
for (ho = 0 ; ho <= 23 ; ho++)
{
for (mi = 0 ; mi <= 59 ; mi++)
{
_putchar(ho / 10 + '0');
_putchar((ho % 10) + '0');
_putchar(':');
_putchar(mi / 10 + '0');
_putchar((mi % 10) + '0');
_putchar('\n');
}
}
}

