#include "main.h"

/**
 * get_bit - Function that returns bit value
 * @n: number
 * @index: index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
int value;

if (index > 63)
	return (-1);

value = (n >> index) & 1;
return (value);
}
