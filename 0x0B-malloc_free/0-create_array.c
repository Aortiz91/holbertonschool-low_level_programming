#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of string
 * @c: character
 * Return: p
 */
char *create_array(unsigned int size, char c)
{
	char *p = NULL;
	unsigned int a;

	if (size > 0)
	{
		p = malloc(sizeof(char) * size);
		if (!p)
		{
			return (p);
		}
		for (a = 0; a < size; a++)
			p[a] = c;
	}
	return (p);
}
