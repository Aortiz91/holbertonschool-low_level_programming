#include "holberton.h"
/**
 * main - Entry point
 * Write a program that prints Holberton, followed by a new line.
 * Return: Always (0) Success
 */
int main(void)
{
	char a[]= "Holberton";
	int b = '0';
		for (b = '0' ; b = '9' ; b++)
		{
			while (b !='\0')
			_putchar(a[b]);
			_putchar('\n');
		}
return (0);
}
