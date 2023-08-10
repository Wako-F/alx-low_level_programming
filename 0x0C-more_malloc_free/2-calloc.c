#include <stdlib.h>
#include "main.h"

/**
 * *setmem - funciton that fills memory with a constant byte
 * @s: memory to be filled
 * @b: char
 * @n: number of times to copy b
 * Return: pointer
 */
char *setmem(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}

/**
 * *_calloc - Function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
	return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
	return (NULL);
setmem(ptr, 0, nmemb * size);
return (ptr);
}
