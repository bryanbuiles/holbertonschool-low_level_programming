#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char lo, q, e;
q = 'q';
e = 'e';
for (lo = 'a' ; lo <= 'z' ; lo++)
{
if (lo != q && lo != e)
putchar(lo);
}
putchar('\n');
return (0);
}
