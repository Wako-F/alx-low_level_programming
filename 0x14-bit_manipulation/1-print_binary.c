#include "main.h"

/**
 * print_binary - Function that prints binary representation
 * @n: number
 */
void print_binary(unsigned long int n)
{
int i, x = 0;
unsigned long int value;

for (i = 63; i >= 0; i--)
{
	value = n >> i;

	if (value & 1)
	{
		_putchar('1');
		x++;
	}
	else if (x)
		_putchar('0');
}
if (!x)
	_putchar('0');
}
