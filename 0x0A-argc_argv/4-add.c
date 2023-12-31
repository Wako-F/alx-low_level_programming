#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Function that adds numbers
 * @argc: No. of arguments
 * @argv: string of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, j, sum = 0;

if ((argc - 1) == 0)
{
	printf("%d\n", sum);
	return (0);
}
for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
