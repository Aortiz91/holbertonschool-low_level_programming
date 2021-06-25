#include "holberton.h"
/**
 * print_triangle - Entry point
 * @ size: integer, size of triangle
 * Description: Write a function that prints a triangle,
 * followed by a new line.
 */
void print_triangle(int size)
{
int a, b;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			for (b = a; b < size; b++)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
