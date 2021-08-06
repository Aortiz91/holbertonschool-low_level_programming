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
	*n = *n & (1 >> index); /*when using bitwise rigth shift "index"*/
				 /*I remove the only byte I have and used*/
				/*the operator AND to convert to 0*/
				 /* my byte in n*/
	return (1);
}
