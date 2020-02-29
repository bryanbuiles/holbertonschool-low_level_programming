#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
  * main - main function
  * @argc: Number of arguments
  * @argv: Array of arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
int i, j = 0;

if (argc < 1)
return (0);
for (i = 1; i < argc ; i++)
{
if (!atoi(argv[i]))
{
printf("%s\n", "Error");
return (1);
}
j = j + atoi(argv[i]);
}
printf("%d\n", j);
return (0);
}
