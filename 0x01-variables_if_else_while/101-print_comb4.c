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
int k;
for (l = '0' ; l <= '9' ; l++)
{
for (j = '0' ; j <= '9' ; j++)
{
for (k = '0' ; k <= '9' ; k++)
if (!(l > j || l == j || j > k || j == k))
{
putchar(l);
putchar(j);
putchar(k);
if (!(l == '7' && j == '8' && k == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
