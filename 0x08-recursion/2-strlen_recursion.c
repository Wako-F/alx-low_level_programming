#include "main.h"
/**
 * _strlen_recursion - Returns string length
 * @s: string
 * Return: 0 (Success)
 */
int _strlen_recursion(char *s)
{
int count = 0;

if (*s == '\0')
	return (count);
count++;
count += _strlen_recursion(s + 1);
return (count);
}
