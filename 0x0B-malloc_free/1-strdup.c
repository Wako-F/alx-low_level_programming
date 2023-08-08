#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Function that duplicates a string
 * @str: character
 * Return: 0 (success)
 */

char *_strdup(char *str)
{
int a = 0;
int b = 0;
char *ptr;

if (str == NULL)
	return (NULL);
while (str[a] != '\0')
	a++;
ptr = malloc(sizeof(char) * (a + 1));
if (ptr == NULL)
	return (NULL);
for (b = 0; b <= a; b++)
	ptr[b] = str[b];
return (ptr);
}
