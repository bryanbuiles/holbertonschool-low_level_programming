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
int i, j = 0;

for (i = 1; i < argc ; i++)
{
if (!atoi(argv[i]))
{
printf("Error\n");
return (1);
}
j = j + atoi(argv[i]);
}
if (argc < 1)
{
printf("0\n");
}
printf("%d\n", j);
return (0);
}
