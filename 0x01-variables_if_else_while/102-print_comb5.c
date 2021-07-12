#include <stdio.h>
/**
 * main - Entry data
 * Write a program that prints all possible different combinations
 * of two two digits
 * Return: Always (0) Success
 */
int main(void)
{
	int a;
	int b;
		for (a = 0 ; a <= 99 ; a++)
		{
			for (b = a + 1; b <= 99 ; b++)
			{
				if (!(a > b || a == b))
				{
					putchar(a / 10 + '0');
					putchar(a % 10 + '0');
					putchar(' ');
					putchar(b / 10 + '0');
					putchar(b % 10 + '0');
					if (a != 98 || b != 99)
					{
						putchar(',');
						putchar(' ');
					}
					else
						{
						putchar ('\n');
						}
				}
			}
		}
	return (0);
}
