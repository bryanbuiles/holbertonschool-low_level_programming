#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - Funtion that prints anything.
 * @format: is a list of types of arguments passed to the function
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, n = 0;
	char *j;
	char *coma = ", ";

	va_start(valist, format);
	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n == (i - 1))
			coma = "";
		switch (format[n])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				printf("%s", coma);
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				printf("%s", coma);
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				printf("%s", coma);
				break;
			case 's':
				j = va_arg(valist, char *);
				if (j == NULL)
				{
					printf("(nil)");
				}
				printf("%s", j);
				printf("%s", coma);
				break;
		}
			n++;
	}
	printf("\n");
	va_end(valist);
}
