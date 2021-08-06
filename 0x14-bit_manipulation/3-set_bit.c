#include "main.h"
/**
 * set_bit - Write a function that sets the value of a bit to 1
 * at a given index
 * @n: pointer to the number
 * @index: bit to look for
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64) /*I will only have 64 bis*/
		return (-1);
	*n = *n | (1 << index); /*bitwise left shift "index" times*/
				 /*and used operator OR to convert*/
				 /* my byte to 1*/
	return (1);
}
