#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: number of diagonal repeats.
 * Description: Draws a diagonal line in the terminal.
 * Return:
 */
void print_diagonal(int n)
{
int a;
{
if (n > 0)
{
for (a = 0; a < n; a++)
_putchar('\\');
_putchar('\n');
}
else
_putchar ('\n');
}
}
