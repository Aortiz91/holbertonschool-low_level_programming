#include <stdio.h>
/**
 * main - Entry data
 * Write a program that prints all possible different combinations
 * of two digits, no repeating numbers
i * Return: Always (0) Success
 */
int main(void)
{
	int a;
	int b;
		for (a = '0' ; a <= '9' ; a++)
		{
			for (b = '0' ; b <= '9' ; b++)
			{
				if (!(a > b || a == b))
				{
					putchar(a);
					putchar(b);
					if (a != '8' || b != '9')
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
