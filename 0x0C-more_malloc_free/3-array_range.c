#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - Write a function that creates an array of integers.
 * @min: min value to contain
 * @max: max value to contain
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *p;
	int size, a;

	if (min > max)
		return (NULL);
	size = max - min;
	p = malloc(sizeof(int) * size);
	if (!p)
		return (NULL);
	for (a = min; min <= max; a++)
		p[a] = min++;
	return (p);
}
