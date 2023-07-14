#include <stdio.h>
/**
 * main - Function that prints lower case letters except q and e
 * Return: 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
	if (letter != 'e' && letter != 'q')
	{
		putchar(letter);
	}
}
putchar('\n');
return (0);
}
