#include "holberton.h"
/**
 * reverse_array -Function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n; i++, n--)
	{
	c = a[i];
	a[i] = a[n];
	a[n] = c;
	}
}
