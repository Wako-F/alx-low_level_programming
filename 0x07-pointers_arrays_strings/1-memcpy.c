#include "main.h"
/**
 *_memcpy - Function that copies memory area
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int i = n;

for (; a < i; a++)
{
	dest[a] = src[a];
	n--;
}
return (dest);
}
