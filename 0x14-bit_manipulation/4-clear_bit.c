#include "main.h"
/**
 * clear_bit -Write a function that sets the value of a bit to 0
 * at a given index
 * @n: pointer to the number
 * @index: bit to look for
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64) /*I will only have 64 bis*/
		return (-1);
	*n = *n & (1 >> index); /*bitwise rigth shift "index" times*/
				 /*and used operator AND to convert*/
				 /* my byte to 0*/
	return (1);
}
