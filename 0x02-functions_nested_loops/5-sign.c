#include "holberton.h"
/**
 * print_sign - Return sign of n
 * @n: - integer number
 * Description: Return if n is >,> or = 0
 * Return: +1, 0 or -1 according to the sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (+1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
