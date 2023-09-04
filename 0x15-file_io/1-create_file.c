#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: A pointer
 * @text_content: A pointer to a string
 * Return: -1 (fail) 1 (success)
 */
int create_file(const char *filename, char *text_content)
{
int mem, x, cnt = 0;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
{
	for (cnt = 0; text_content[cnt];)
		cnt++;
}

mem = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
x = write(mem, text_content, cnt);

if (mem == -1 || x == -1)
	return (-1);
close(mem);
return (1);
}
