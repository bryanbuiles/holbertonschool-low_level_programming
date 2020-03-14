#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - Funtion that prints numbers.
 * @n: number of elements
 * @separator: separator
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	int j;

	if (separator != NULL)
	{
		va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			j = va_arg(valist, int);
			printf("%d", j);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(valist);
	}
}
