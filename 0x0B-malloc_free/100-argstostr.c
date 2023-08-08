#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concats arguments
 * @ac: no. of args
 * @av: string of args
 * Return: 0 (Success)
 */
char *argstostr(int ac, char **av)
{
int a, b, c = 0, count = 0;
char *str;
if (ac == 0 || av == NULL)
	return (NULL);
for (a = 0; a < ac; a++)
{
	for (b = 0; av[a][b]; b++)
		count++;
}
count += ac;
str = malloc(sizeof(char) * (count + 1));
if (str == NULL)
	return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
	str[c] = av[a][b];
	c++;
}
if (str[c] == '\0')
{
	str[c++] = '\n';
}
}
return (str);
}
