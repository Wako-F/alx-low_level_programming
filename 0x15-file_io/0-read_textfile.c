#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads and prints txt file
 * @filename: text file
 * @letters: no of letters
 * Return: w- bytes/0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *mem;
ssize_t x;
ssize_t y;
ssize_t z;

x = open(filename, O_RDONLY);
if (x == -1)
	return (0);
mem = malloc(sizeof(char) * letters);
z = read(x, mem, letters);
y = write(STDOUT_FILENO, mem, z);

free(mem);
close(x);
return (y);
}
