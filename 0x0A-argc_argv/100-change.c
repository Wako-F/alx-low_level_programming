#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function that returns no of cents
 * @argc: No of arguments
 * @argv: string of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
int i, j, change;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
	printf("Error\n");
	return (1);
}

i = atoi(argv[1]);
change = 0;
if (i < 0)
{
	printf("0\n");
	return (0);
}

for (j = 0; j < 5 && i >= 0; j++)
{
	while (i >= coins[j])
	{
		change++;
		i -= coins[j];
	}
}

printf("%d\n", change);
return (0);
}
