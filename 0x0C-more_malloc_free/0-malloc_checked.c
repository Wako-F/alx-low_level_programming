#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: unsigned int
 * Return: pointer to mem
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
	exit(98);
return (ptr);
}
