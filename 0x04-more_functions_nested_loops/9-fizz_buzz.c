#include<stdio.h>
/**
 * more_numbers - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;

for (i = 1 ; i <= 100 ; i++)
{
  if (!((i % 3) == 0 ) && (!((i % 5) == 0)))
printf("%d", i);	
	if ( (i % 3) == 0)		
printf("Buzz");
}
{
	printf("\n");
			}
return (0);
}
