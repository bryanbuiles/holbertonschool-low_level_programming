#include "holberton.h"

/**
  * cap_string - function
  * @s:imput
  * Return: s
 */

char *cap_string(char *s)
{
int p[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};
int j, i = 0;

for (; s[i] != '\0'; i++)
{
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
}
for (j = 0; j < 15 ; j++)
{
if (s[i] == p[j])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = (s[i + 1] - 32);
}
}
}
}
return (s);
}
