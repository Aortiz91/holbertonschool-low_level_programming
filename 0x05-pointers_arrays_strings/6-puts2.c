#include "holberton.h"
/**
 * puts2 - Function that prints every other character.
 * @str: string
 */
void puts2(char *str)
{
	int l;

	l = 0;

	while (str[l] != '\0')
	{
		if (l % 2 == 0)
			_putchar(str[l]);
	l++;
	}
	_putchar('\n');
}
