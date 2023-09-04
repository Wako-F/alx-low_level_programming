#include "main.h"

/**
 * append_text_to_file - Function that appends text (end)
 * @filename: A pointer
 * @text_content: The string
 * Return: -1 (fail) 1 (success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
int x, y, cnt = 0;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
{
	for (cnt = 0; text_content[cnt];)
		cnt++;
}
x = open(filename, O_WRONLY | O_APPEND);
y = write(x, text_content, cnt);

if (x == -1 || y == -1)
	return (-1);
close(x);
return (1);
}
