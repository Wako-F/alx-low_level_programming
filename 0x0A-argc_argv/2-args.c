#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints arguments
 * @argc: No. of arguments
 * @argv: String or arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
