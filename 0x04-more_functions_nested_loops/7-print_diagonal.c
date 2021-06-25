#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: number of diagonals repeats.
 * Description: Draws a diagonal line in the terminal.
 * Return:
 */
void print_diagonal(int n)
{
int row, col;
{
	if (n <= 0)
	_putchar('\n');
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row; col++)
			{
				if (col == row)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
}
}
