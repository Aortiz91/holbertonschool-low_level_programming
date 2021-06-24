#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: number of diagonal repeats.
 * Description: Draws a diagonal line in the terminal.
 * Return:
 */
void print_diagonal(int n)
{
int a, b;
if (n < 0)
_putchar('\n');
else if ((n > 0) && (n < 2))
_putchar ('\\');
_putchar ('\n');
else
{
_putchar('\\');
_putchar('\n');
for (a = 1; a < n; a++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
