#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - Write a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: array X
 * @height: array Y
 * Return: Pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **p;

	if (width < 1 || height < 1)
	return (NULL);

	p = malloc(width * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (x = 0; x < width; x++)
	{
		for (y = 0; y < height; y++)
		{
			p[x][y] = 0;
		}
	}
	return (p);
}
