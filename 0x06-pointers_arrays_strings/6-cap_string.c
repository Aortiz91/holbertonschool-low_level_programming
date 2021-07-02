#include "holberton.h"
/**
 * *cap_string - Function that capitalizes all words of a string.
 * @str: string
 * Return: Always 0
 */
char *cap_string(char *str)
{
	int a, b;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a == 0 && str[a] >= 97 && str[a] <= 122)
			str[a] -= 32;
		for (b = 0; b < 13; b++)
			if (str[a] == sep[b])
			{
				if (str[a + 1] >= 97 && str[a + 1] <= 122)
				{
					str[a + 1] -= 32;
				}
			}
	}
	return (str);
}
