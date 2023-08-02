#include "main.h"

int realsqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root
 * @n: int input
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (realsqrt_recursion(n, 0));
}

/**
 * realsqrt_recursion - find the natural square root
 * @n: int input
 * @i: iterator
 * Return: square root
 */
int realsqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (realsqrt_recursion(n, i + 1));
}

