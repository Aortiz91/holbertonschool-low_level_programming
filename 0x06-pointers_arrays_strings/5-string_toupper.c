#include "holberton.h"
/**
 * *string_toupper - Function that changes all lowercase letters
 * of a string to uppercase.
 * @string: string
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 97 && str[a]  <= 122)
			str[a] = (str[a] - 32);
	}
	return (str);
}
