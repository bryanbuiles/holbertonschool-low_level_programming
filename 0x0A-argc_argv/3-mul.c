#include <stdio.h>
#include <stdlib.h>

/**
  * main - main function
  * @argc: Number of arguments
  * @argv: Array of arguments
  * Return: 0
  */

int main(int argc, char *argv[])

{
int i;

if (argc > 2)
{
i = (atoi(argv[argc - 2]) * atoi(argv[argc - 1]));
printf("%d\n", i);
}
else
{
printf("Error\n");
}
return (0);
}
