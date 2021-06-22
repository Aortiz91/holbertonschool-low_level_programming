#include "holberton.h"
/**
 * main - Entry point
 * Write a program that prints Holberton, followed by a new line.
 * Return: Always (0) Success
 */
int main(void)
{
	char a[]= "Holberton";
	int b = 0;
		while (a[b] != '\0')
		{
		_putchar(a[b]);
		b++ ;
		}
		_putchar('\n');
return (0);
}
