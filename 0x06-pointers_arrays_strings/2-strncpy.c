#include "holberton.h"

/**
    * *_strcat - entry point
      * @dest: pointer
        * @src: pointer
	  * Return: Always 0 (success)
	    */

char *_strncpy(char *dest, char *src, int n)
{

	int j= 0;

	for (; src[j] != '\0'; j++)
	if (j < n)
	dest[j] = src[j];
	for (; j < n; j++)
	dest[j] = '\0';
	return (dest);
}

