#include "holberton.h"

/**
 * print_numbers - Entry point
 * Description: Function that prints the numbers frim 0-9
 * Return: (void)
 */
void print_numbers(void)
{
int a;
a = 0;
while (a < 10)
{
_putchar(a + '0');
a++;
}
_putchar('\n');
}
