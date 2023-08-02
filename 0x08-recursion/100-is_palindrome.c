#include "main.h"

int palindrome(char *s, int i, int len);
int _strnlength(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, _strnlength(s)));
}

/**
 * _strnlength - returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strnlength(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strnlength(s + 1));
}

/**
 * palindrome - checks if palindrome
 * @s: string
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (palindrome(s, i + 1, len - 1));
}
