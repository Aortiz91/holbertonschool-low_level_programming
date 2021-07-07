#include "holberton.h"
/**
 * _puts_recursion - Write a function that prints a string,
 * followed by a new line
 * @s: String
 */
void _puts_recursion(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
