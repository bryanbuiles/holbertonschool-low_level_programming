#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int lo;
for (lo = '0' ; lo <= '9' ; lo++)
{
putchar(lo);
if (lo != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
