#include "main.h"
/**
 * _strpbrk - Searches for first occurrence of character
 * @s: pointer to string
 * @accept: characters to search for
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s != '\0')
{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
		return (s);
	}
	s++;
	}

return ('\0');
}
