#include "holberton.h"
/**
 * print_rev - print a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int a, l;
	while (s[l] != '\0')
	{
		l++;
	}
	for (a = l; a >= 0; a--)
	{
		_putchar(a);
	}
	_putchar('\n');
}
