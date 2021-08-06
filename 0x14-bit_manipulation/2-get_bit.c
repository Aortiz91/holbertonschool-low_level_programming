#include "main.h"
/**
 * get bit - Write a function that returns the value of a bit at a given index
 * @n: entire number
 * @index: bit to look for
 * Return: Value of the bit at a index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	if (index > 64)
		return (-1);
	value = (n >> index); 
		return (value & 1);
}
