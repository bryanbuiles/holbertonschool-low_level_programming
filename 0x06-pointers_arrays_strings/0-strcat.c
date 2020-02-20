#include "holberton.h"

/**
  * *_strcat - entry point
  * @dest: pointer
  * @src: pointer
  * Return: Always 0 (success)
  */

char *_strcat(char *dest, char *src)
{

int n = 0;

int j = 0;

for (; dest[n] != '\0'; n++)
{
}
for (; src[j] != '\0'; j++)
{
dest[n] = src[j];
n++;
}
dest[n] = '\0';
return (dest);
}
