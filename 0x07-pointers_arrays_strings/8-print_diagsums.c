#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Write a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int b;

	sumx = 0;
	sumy = 0;

	for (b = 0; b < size; b++)
	{
		sumx += a[(size + 1) * b];
		sumy += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", sumx, sumy);
}
