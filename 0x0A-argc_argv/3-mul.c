#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main- Function that multiplies two numbers
 * @argc: no. of arguments
 * @argv: String of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
int i, j;

if ((argc - 1) != 2)
{
	printf("Error\n");
	return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);

printf("%d\n", (i *j));
return (0);
}
