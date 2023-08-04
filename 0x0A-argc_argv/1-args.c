#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints no. of arguments
 * @argc: no. of arguments
 * @argv: string of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
