#include "main.h"
/**
 * binary_to_uint - Write a function that converts a binary number to
 * an unsigned int.
 * @b: string in binary
 * Return: (converted to decimal)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int a, bit = 1;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
		;
	for (a--; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		else if (b[a] == '1')
		{
			decimal += bit;
			bit = bit * 2;
		}
		else
			bit = bit * 2;
	}
return (decimal);
}
