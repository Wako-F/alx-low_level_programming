#include <stdlib.h>
#include "main.h"

/**
 * create_array - Function that creates an array
 * @size: Size of array
 * @c: character
 * Return: NULL of pointer to array
 */

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
	return (NULL);
for (i = 0; i < size; i++)
	ptr[i] = c;
return (ptr);
}
