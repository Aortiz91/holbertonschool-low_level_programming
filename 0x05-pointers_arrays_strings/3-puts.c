#include "holberton.h"
/**
 * _puts - Prints a string followed by a new line
 * @str: string to print
 * Return: a
 */
void _puts(char *str)
{
	int a;
	a = 0;
	while (a != 0)
	{
		_putchar (a);
		a++;
	}
	_putchar('\n');
}
