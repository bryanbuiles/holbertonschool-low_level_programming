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
}
for (lo = 'a' ; lo <= 'f' ; lo++)
{
putchar(lo);
}
putchar('\n');
return (0);
}
