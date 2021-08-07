#include "main.h"
/**
 * flip_bits - Write a function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number 1
 * @m: number 3
 * Return: bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nm;
	int counter = 0;

	nm = n ^ m;

	while (nm)
	{
		counter += nm & 1;
		nm = nm >> 1;
	}
	return (counter);
}
