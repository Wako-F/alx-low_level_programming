#include "main.h"
/**
 * _strlen - function that return length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
	len++;
	s++;
}
return (len);
}
