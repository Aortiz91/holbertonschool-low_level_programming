#include "holberton.h"
/**
 * *leet - Write a function that encodes a string into 1337.
 * @s: string to encode
 * Return: s
 */
char *leet(char *s)
{
	int a, b;
	char ch[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

		for (a = 0; s[a] != '\0'; a++)
		{
		for (b = 0; ch[b]; b++)
		{
			if (s[a] == ch[b])
				s[a] = leet[b];
		}
		}
return (s);
}
