#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry function
 * @argc: OPerator
 * @argv: NUmber
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int num1, num2, valor;
	int (*resul)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((get_op_func(argv[2])) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	resul = get_op_func(argv[2]);
	valor = resul(num1, num2);
	printf("%d\n", valor);
	return (0);
}
