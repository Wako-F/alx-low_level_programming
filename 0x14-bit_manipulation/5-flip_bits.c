#include "main.h"

/**
 * flip_bits - Function that counts no of bits
 * @n: first no
 * @m: second no
 * Return: no of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, x = 0;
unsigned long int value;
unsigned long int new = n ^ m;

for (i = 63; i >= 0; i--)
{
	value = new >> i;
	if (value & 1)
		x++;
}
return (x);
}
