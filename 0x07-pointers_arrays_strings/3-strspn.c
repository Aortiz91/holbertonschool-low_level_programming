#include "holberton.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: string
 * @accept: character to look
 * Return: (s)
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, l = 0;

	for (a = 0; s[a] != ' '; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			l++;
		}
	}
	return (l);
}
