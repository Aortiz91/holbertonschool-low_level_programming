#include "holberton.h"
/**
 * print_last_digit - Function
 * Description: Write a function that prints the last digit of a number.
 * @n: integer
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
int m = n % 10;
if (n < 0)
	n = -n;
	_putchar(m + '0');
	return (m);
}
