#include <stdio.h>
/**
 * main - Function prints two two digit combinations
 * Return: 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 0; i < 100; i++)
{
	for (j = i; j < 100; j++)
	{
		if (i != j)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
