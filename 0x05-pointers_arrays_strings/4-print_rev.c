#include "holberton.h"
/**
 * print_rev - Prints a string followed by a new line
 * @s: string to print
 */
void print_rev(char *s)
{
	int len, a;

	while (s[len] != '\0')
	{
		len++;
	}
	len = len;
	for (a = len; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
