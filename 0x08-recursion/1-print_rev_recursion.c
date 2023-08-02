#include "main.h"
/**
 * _print_rev_recursion - Function that prints string rev
 * @s: String
 * Return: 0 (Success)
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
	return;
_print_rev_recursion(s + 1);
_putchar(*s);
}
