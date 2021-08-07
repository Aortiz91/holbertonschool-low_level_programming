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
	if (index > 64) /*Because I will only have 64 bits*/
		return (-1);
	*n = *n & (~(1 << index)); /*Moved 1 to the position index*/
/*used ~ to switch all bits to 1 except the one in index position*/
	return (1);
}
