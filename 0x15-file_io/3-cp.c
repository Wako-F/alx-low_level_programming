#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buff(char *file);
void shut_file(int x);

/**
 * make_buff - Function that allocates 1024 bytes
 * @file: name of the file buff
 * Return: A pointer
 */
char *make_buff(char *file)
{
char *buff;

buff = malloc(sizeof(char) * 1024);

if (buff == NULL)
{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
	exit(99);
}
return (buff);
}

/**
 * shut_file - Function that closes file descriptors
 * @x: The file descriptor
 */
void shut_file(int x)
{
int a;

a = close(x);
if (a == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close x %d\n", x);
	exit(100);
}
}

/**
 * main - Function that copies the contents from file to file
 * @argc: no. of arguments
 * @argv: An array of pointers
 * Return: 0 (success)
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int from, to, c, b;
char *buff;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

buff = make_buff(argv[2]);
from = open(argv[1], O_RDONLY);
c = read(from, buff, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
	if (from == -1 || c == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}

	b = write(to, buff, c);
	if (to == -1 || b == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}

	c = read(from, buff, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);

} while (c > 0);

free(buff);
shut_file(from);
shut_file(to);

return (0);
}
