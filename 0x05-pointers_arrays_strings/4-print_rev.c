#include "holberton.h"
/**
 * print_rev - print a string in reverse 
 * @s: string
 */
void print_rev(char *s)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	b = a;

	for ((c = b - 1); c >= 0; c--)
	{
                _putchar(s[c]);
	}
	_putchar('\n');
}
