#include "main.h"
/**
 * _strchr - Function that finds character
 * @s: string input
 * @c: character to be found
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
	if (s[i] == c)
		return (&s[i]);
}
return (0);
}
