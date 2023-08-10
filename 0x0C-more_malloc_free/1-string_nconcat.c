#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that concats n chars
 * @s1: main string
 * @s2: string to copy
 * @n: no. of chars to copy
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *string;
unsigned int i = 0, j = 0, k = 0, l = 0;

while (s1 && s1[i])
	i++;
while (s2 && s2[j])
	j++;
if (n < j)
	string = malloc(sizeof(char) * (i + n + 1));
else
	string = malloc(sizeof(char) * (i + j + 1));

if (!string)
	return (NULL);
while (k < i)
{
	string[k] = s1[k];
	k++;
}

while (n < j && k < (i + n))
	string[k++] = s2[l++];

while (n >= j && k < (i + j))
	string[k++] = s2[l++];
string[k] = '\0';

return (string);
}
