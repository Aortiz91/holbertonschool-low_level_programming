#include "holberton.h"
/**
 * print_times_table - Entry point
 * @n: integer
 * Description: Print n times table
 * Return:
 */
void print_times_table(int n)
{
int a, b, m;
	if (n > 15 || n < 0)
	return;
	for (a = 0; a <= n ; a++)
	{
		for (b = 0; b <= n; b++)
		{
			m = (a * b);
				if (b == 0)
				{
					_putchar (m + '0');
				}
				else if (m > 99)
				{
					_putchar (',');
					_putchar (' ');
					_putchar ((m / 100) + '0');
					_putchar (((m / 10) % 10) + '0');
					_putchar ((m % 10) + '0');
				}
				else if (m > 9 && m < 100)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar ((m / 10) + '0');
					_putchar ((m % 10) + '0');
				}
				else if (m <= 9 && b != 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar (' ');
					_putchar (m + '0');
				}
		}
	_putchar ('\n');
	}
	}
