#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concts
 * @s1: first string
 * @s2: second string
 * Return: concat string
 */

char *str_concat(char *s1, char *s2)
{
int a = 0;
int b = 0;
char *ptr;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[a] != '\0')
	a++;
while (s2[b] != '\0')
	b++;
ptr = malloc(sizeof(char) * (a + b + 1));
if (ptr == NULL)
	return (NULL);
/* Reset counters back to 0*/
a = b = 0;

while (s1[a] != '\0')
{
	ptr[a] = s1[a];
	a++;
}
while (s2[b] != '\0')
{
	ptr[a] = s2[b];
	a++;
	b++;
}
ptr[a] = '\0';
return (ptr);
}
