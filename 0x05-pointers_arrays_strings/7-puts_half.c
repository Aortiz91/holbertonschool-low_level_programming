#include "holberton.h"
/**
 * puts_half - Function that prints half of a string, followed by a new line.
 * @str: string
 */
void puts_half(char *str)
{
	int l, n;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
		n = (l / 2);
	else
		n = (l + 1) / 2;
	while (n < l)
	{
		_putchar(str[n]);
		n++;
	}
}
