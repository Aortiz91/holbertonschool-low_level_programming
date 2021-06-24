#include "holberton.h"

/**
 * print_numbers - Entry point
 * Description: Function that prints the numbers frim 0-9
 * Return: (void)
 */
void print_numbers(void)
{
int num;
num = 0;
while (num < 10)
{
_putchar(num + '0');
num++;
}
_putchar('\n');
}
