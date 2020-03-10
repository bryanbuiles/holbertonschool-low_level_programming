#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - main function
 * @str: Number of arguments
 * Return: p
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int j, i;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	p = malloc(sizeof(char) * (j + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}

/**
  * new_dog - entry point
  * @name: DOg name
  * @age: Dog age
  * @owner: Dog owner
  * Return: Void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog_t;

	newdog_t = malloc(sizeof(dog_t));
	if (newdog_t == NULL)
	{
		return (NULL);
	}
	newdog_t->name = _strdup(name);
	if (newdog_t->name == NULL)
	{
		free(newdog_t);
		return (NULL);
	}
	newdog_t->age = age;
	newdog_t->owner = _strdup(owner);
	if (newdog_t->owner == NULL)
	{
		free(newdog_t->name);
		free(newdog_t);
		return (NULL);
	}
	return (newdog_t);
}
