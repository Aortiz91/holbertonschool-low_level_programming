#include "holberton.h"

/**
 * print_numbers - Entry point
 * Description: Function that prints the numbers frim 0-9
 * Return: (void)
 */
void print_numbers(void)
{
int c;
c = 0;
while (c < 10)
{
_putchar(c + '0');
c++;
}
_putchar('\n');
}
