#include <stdio.h>
#include <stdlib.h>

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
