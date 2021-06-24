#include "holberton.h"
/**
 * print_line - Entry point
 * @n: number of lines repeats.
 * Description: Draws a straight line in the termina.
 * Return:
 */
void print_line(int n)
{
int a;
for (a = 0; a <= n; a++)
{
_putchar('_');
}
_putchar('\n');
if (n <= 0)
_putchar('\n');
}
