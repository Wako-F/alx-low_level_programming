#include "main.h"
/**
 * _strspn - Checks length of prefix
 * @s: string to be searched
 * @accept: string to match
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

while (*s != '\0')
{
	for (r = 0; accept[r]; r++)
	{
		if (*s == accept[r])
		{
			n++;
			break;
		}
		else if (accept[r + 1] == '\0')
			return (n);
	}
	s++;
}
return (n);
}
