#include <stdio.h>
/**
 * main - Function that prints the lower case alphabet
 * Return: 0 (Success)
 */
int main(void)
{
int count = 0;
while (count < 26)
{
	putchar(count + 'a');
	count++;
}
putchar('\n');
return (0);
}
