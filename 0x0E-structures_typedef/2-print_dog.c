#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - entry point
 * @d: pointer
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->age == 0)
	{
		printf("Age: (nill)\n");
	}
}
