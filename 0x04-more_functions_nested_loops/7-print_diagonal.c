#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: number of diagonals repeats.
 * Description: Draws a diagonal line in the terminal.
 * Return:
 */
void print_diagonal(int n)
{
int bar, sp;
{
if (n <= 0)
_putchar('\n');
else
{
	for (sp = 0; sp < n; sp++)
	{
		for (bar = 0; bar < n; bar++)
		{
			if (sp == bar)
			_putchar('\\');
			else
			_putchar(' ');
		}
	_putchar('\n');
	}
}
}
}
