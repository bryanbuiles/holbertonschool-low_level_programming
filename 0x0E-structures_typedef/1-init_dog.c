#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry point
 * @d: pointer
 * @name: DOg name
 * @age: Dog age
 * @owner: Dog owner
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
