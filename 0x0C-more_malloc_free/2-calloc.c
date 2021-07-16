#include "holberton.h"
#include <stdlib.h>
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
	unsigned int a = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);
	for (a = 0; a < nmemb; a++)
		p[a] = 0;
	return (p);
}
