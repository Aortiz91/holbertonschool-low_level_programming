#include "holberton.h"

/**
 * _num_print - prints string
 * @n: integer to be printed
 *
 * Return: n
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		_num_print(n / 10);
	}
	_putchar((n % 10) + '0');
}
