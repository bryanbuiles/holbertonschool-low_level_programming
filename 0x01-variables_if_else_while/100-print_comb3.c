#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int l;
int j;
for (l = '0' ; l <= '9' ; l++)
{
for (j = '0' ; j <= '9' ; j++)
if (!(l > j || l == j))
{
putchar(l);
putchar(j);
if (!(l == '8' && j == '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
