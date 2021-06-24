#include "holberton.h"
/**
 * more_numbers - Entry point
 * Description: Prints 10 times numbers frm 0-14
 * Return:
 */
void more_numbers(void)
{
int a, b;
for (b = 0; b <= 10; b++)
{
for (a = 0; a <= 14; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
}
