#include "main.h"
/**
 * _pow_recursion - Function that raises x power y
 * @x: base int
 * @y: power int
 * Return: 0 (Success)
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
	return (1);
if (y < 0)
	return (-1);
return (x * _pow_recursion(x, y - 1));
}
