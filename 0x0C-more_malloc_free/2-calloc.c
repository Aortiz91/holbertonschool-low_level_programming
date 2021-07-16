#include "holberton.h"
#include <stdlib.h>
/**
 * *_memset -  Write a function that fills memory with a constant byte.
 * @s: memory
 * @b: char to copy
 * @n: times to copy b
 * Return: (s) pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
/**
 * _calloc -  Write a function that allocates memory for an array,
 * using malloc.
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to a allocated space in memory initialized to 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
	free(p);
}
