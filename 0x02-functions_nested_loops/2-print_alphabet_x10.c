#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 * Write a function that prints the alphabetx10 in lower case
 * Return: Always (0) Success
 */
void print_alphabet_x10(void)
{
int repeat;
char abc;
	for (repeat = 0; repeat < 10; repeat++)
		{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar (abc);
		_putchar('\n');
		}
}
