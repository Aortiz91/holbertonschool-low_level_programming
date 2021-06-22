#include <stdio.h>
/**
 * main - Entry data
 * Write a program that prints all possible different combinations of two digits
 * Return: Always (0) Success
 */
int main(void)
{
int comb;
for (comb = '0' ; comb <= '99' ; comb++)
{
putchar (comb)
if (comb != '99')
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
