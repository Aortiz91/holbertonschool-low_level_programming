#include "holberton.h"
/**
 * times_table - Entry point
 * Description: Matrix to show each result of a*b
 * Return:
 */
void times_table(void)
{
int a, b;
int m;
	for (a = 0; a < 10 ; a++)
	{
		for (b = 0; b < 10; b++)
		{
			m = (a * b);
				if (m > 9)
				{
					_putchar (',');
					_putchar (' ');
					_putchar ((m / 10) + '0');
					_putchar ((m % 10) + '0');
				}
				else if (m <= 9 && m > 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar (m + '0');
				}
				else if (m == 0 && b != 0 && a == 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar ('0');
				}
				else
				{
					_putchar ('0');
				}
		}
	_putchar ('\n');
	}
}
