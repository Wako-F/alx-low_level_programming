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
unsigned int i, j, k, l = 0;
char *string;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
/*count no. of chars*/
while (s1[i] != '\0')
	i++;
while (s2[j] != '\0')
	j++;
/*control for n being bigger than j*/
if (n >= j)
	n = j;
string = (char *)malloc(i + n + 1);
if (string == NULL)
	return (NULL);
/*Concat strings. Firsst copies s1 to string, then n chars from s2 to string*/
for (k = 0; s1[k] != '\0'; k++)
	string[k] = s1[k];
for (l = 0; l < n; l++)
	string[k + l] = s2[l];
string[k + l] = '\0';
return (string);
}
