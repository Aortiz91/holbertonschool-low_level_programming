#include "holberton.h"

/**
 * print_number - prints a number
 * @n: integer to be printed
 *
 * Return: n
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
