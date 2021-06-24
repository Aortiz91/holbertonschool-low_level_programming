#include "holberton.h"
/**
 * print_numbers - Entry point
 * Description: Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Return: (void)
 */
int print_numbers(void)
{
int a;
for (a = '0' ; a <= '9' ; a++)
	_putchar(a + '0');
_putchar('\n');
}
