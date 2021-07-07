#include "holberton.h"
/**
 * _puts_recursion - Write a function that prints a string,
 * followed by a new line
 * @s: String
 */
void _puts_recursion(char *s)
{
	int a;
	a = 0;

	if (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
