#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed by a new line.
 * @a: array
 * @n: elements of th array
 */
void print_array(int *a, int n)
{
	int b

	for (b = 0; b < n; b++)
	{
	if ( b == 0)
		printf("%d", a[b]);
	else
		printf(", %d", a[b]);
	}
	printf("\n");
}
