#include "holberton.h"
/**
 * *rot13 - Write a function that encodes a string using rot13.
 * @s: string to encode
 * Return: 0
 */
char *rot13(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= '97' && s[a] <= '110')
			s[a] = *(s + '13');
		else
			s[a] = *(s - '13');
	}
	return (s);
}
