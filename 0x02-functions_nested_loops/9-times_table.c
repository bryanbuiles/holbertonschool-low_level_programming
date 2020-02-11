#include "holberton.h"
/**
 * print_sign - less  more or zero
 * @n: first operand
 *
 * Return: 1 is lowercase or 0 if not
 */
void times_table(void)
{
int ho;
int mi;
int i;
int j;
for (ho = 0 ; ho <= 9 ; ho++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
{
for (mi = 1 ; mi <= 9 ; mi++)
{
i = (mi * ho);
j = (i / 10);
if (j > 0)
{
_putchar(j +'0');
}
else
_putchar(' ');
}
_putchar((i % 10) + '0');
if (mi < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
./9-times_table | cat -e
