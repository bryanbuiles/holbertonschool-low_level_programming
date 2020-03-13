#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - Funtion that prints strings.
 * @n: number of elements
 * @separator: separator
 * Return: void.
 */

void print_all(const char * const format, ...)
{
{
	
    
    
    
    
    
    
    
    
    va_list valist;
	unsigned int i = 0;
	char *j;

	if (separator != NULL)
	{
		va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			j = va_arg(valist, char*);
			if (j != NULL)
			{
				printf("%s", j);
			}
			else
			{
				printf("nil");
			}
			if (i < n - 1)
				printf("%s", separator);
		}
	printf("\n");
	va_end(valist);
	}
}





}
