#include "holberton.h"
/**
 * rev_string - Reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	int a, b, c, com;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;

	for (c = 0; c < (b / 2); c++)
	{
		com = s[c];
		s[c] = s[b];
		s[b--] = com;
	}
}
