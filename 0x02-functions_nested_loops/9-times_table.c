#include "holberton.h"
/**
 * times_table - Entry point
 * Description: Matrix to show each result of a*b
 * Return:
 */
void times_table(void)
{
int a, b;
int m, n;
	for (a = 0; b < 10 ; a++)
	{
		for (b = 0; b < 10; b++)
		{
			m = (a * b)
				if (m > 10)
					_putchar ((m / 10) + '0');
					_putchar ((m % 10) + '0');
					_putchar (',');
					_putchar (' ');
				else
					_putchar (m + '0');
		}
	_putchar ('\n);
	}
}
