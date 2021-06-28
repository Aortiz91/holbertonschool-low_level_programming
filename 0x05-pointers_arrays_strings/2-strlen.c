#include "holberton.h"
/**
 * _strlen - Entry point.
 * @s: string 
 * Write a function that returns the length of a string.
 */
int _strlen(char *s)
{
	int a;
	for (a = 0; s[a] != '\0'; a++)
{
	_putchar(a);
}
	return (a);
}
