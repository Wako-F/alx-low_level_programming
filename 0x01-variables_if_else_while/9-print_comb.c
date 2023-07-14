#include <stdio.h>
/**
 * main - Function that prints all combinations of single digits
 * Return: 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
	putchar('0' + i);
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
