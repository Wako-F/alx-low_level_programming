#include "main.h"
/**
 * puts2 - Function that prints every other character
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
int i = 0;
int j = 0;
int k;
char *l = str;

while (*l != '\0')
{
	l++;
	i++;
}
j = i - 1;
for (k = 0; k <= j; k++)
{
	if (k % 2 == 0)
	{
		_putchar(str[k]);
	}
}
_putchar('\n');
}
