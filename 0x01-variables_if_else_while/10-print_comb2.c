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
for (l = '0' ; l <= '9' ; l++)
{
int j;
for (j = '0' ; j <= '9' ; j++)
{
putchar(l);
putchar(j);
if (!(l == '9' && j == '9'))
{
putchar(',');
putchar(' ');
}}}
putchar('\n');
return (0);
}
