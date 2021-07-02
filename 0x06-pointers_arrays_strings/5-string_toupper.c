#include "holberton.h"
/**
 * *string_toupper - Function that changes all lowercase letters
 * of a string to uppercase.
 * @string: string
 * Return: Always 0
 */
char *string_toupper(char *string)
{
	char a;

	for (a = 0; string[a] != '\0'; a++)
	{
		if (string[a] >= 97 && string[a]  <= 122)
			string[a] = (string[a] - 32);
	}
	return (string);
}
