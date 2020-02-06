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
for (lo = 'z' ; lo >= 'a' ; lo--)
{
putchar(lo);
}
putchar('\n');
return (0);
}
