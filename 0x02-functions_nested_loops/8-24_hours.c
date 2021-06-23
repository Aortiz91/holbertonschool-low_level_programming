#include "holberton.h"
/**
 * jack_bauer -  display each minute
 * Description: Return the value of each minute of the day
 * Return: Void
 */
void jack_bauer(void)
{
	int h, m;
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}                                
