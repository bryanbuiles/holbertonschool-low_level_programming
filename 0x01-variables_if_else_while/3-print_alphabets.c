#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char lo;
for (lo = 'a' ; lo <= 'z' ; lo++)
{
putchar(lo);
}
for (lo = 'A' ; lo <= 'Z' ; lo++)
{
putchar(lo);
}
putchar('\n');
return (0);
}
