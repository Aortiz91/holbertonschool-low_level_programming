#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - Write a function that allocates memory using malloc.
 * @b: allocated bytes
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
