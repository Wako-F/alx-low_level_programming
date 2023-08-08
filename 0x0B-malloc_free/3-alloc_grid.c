#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function that makes a grid
 * @width: width
 * @height: height
 * Return: pointer to 2 dimension array
 */
int **alloc_grid(int width, int height)
{
int **ptr;
int a, y;

if (width <= 0 || height <= 0)
	return (NULL);
ptr = malloc(sizeof(int *) * height);
if (ptr == NULL)
	return (NULL);
for (a = 0; a < height; a++)
{
	ptr[a] = malloc(sizeof(int) * width);
	if (ptr[a] == NULL)
	{
		for (; a >= 0; a--)
			free(ptr[a]);
		free(ptr);
		return (NULL);
	}
}
for (a = 0; a < height; a++)
{
	for (y = 0; y < width; y++)
		ptr[a][y] = 0;
}
return (ptr);
}
