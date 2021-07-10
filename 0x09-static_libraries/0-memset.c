#include "holberton.h"
/**
 * *_memset - Write a function that fills memory with a constant byte.
 * Description: Copies the char C to n bytes of a string
 * @s: string
 * @b: char
 * @n: int
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
