#include <stdio.h>
/**
 * main - Function that prints the alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
