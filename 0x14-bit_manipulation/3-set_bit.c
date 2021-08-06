#include "main.h"
/**
 * set_bit - Write a function that returns the value of a bit at a given index
 * @n: entire number
 * @index: bit to look for
 * Return: Value of the bit at a index index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > 64)
		return (-1);
	for (value = 1; index > 0; index--, value *= 2);
	
	*n += value;
		return (1);
}
