#include <stdio.h>

/**
  * main - main function
  * @argc: Number of arguments
  * @argv: Array of arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc ; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
