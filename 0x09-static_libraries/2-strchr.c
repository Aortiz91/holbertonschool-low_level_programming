#include "holberton.h"
/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: string to loook
 * @c: character to locate
 * Return: (s)
 */
char *_strchr(char *s, char c)
{
	int  a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
