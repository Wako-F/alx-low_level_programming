#include <stdio.h>
/**
 * main - Function that prints both uppercase and lowercase letters
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
count = 0;
while (count < 26)
{
	putchar(count + 'A');
	count++;
}
putchar('\n');
return (0);
}
