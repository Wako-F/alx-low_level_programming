#include <stdio.h>
/**
 * main - Function that prints _putchar
 * Return: 0 (Success)
 */
int main(void)
{
const char *str = "_putchar";
int i = 0;
while (str[i] != '\0')
{
	putchar(str[i]);
	i++;
}
putchar('\n');
return (0);
}
