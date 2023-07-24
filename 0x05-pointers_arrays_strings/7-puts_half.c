#include "main.h"
/**
 * puts_half - Function that prints half a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
int i;
int j;
int k = 0;
for (i = 0; str[i] != '\0'; i++)
	k++;
j = (k / 2);
if ((k % 2) == 1)
	j = ((k + 1) / 2);
for (i = j; str[i] != '\0'; i++)
	_putchar(str[i]);
_putchar('\n');
}
