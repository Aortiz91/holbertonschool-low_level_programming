#include "holberton.h"
/**
 * *_strstr - Write a function that locates a substring
 * @haystack: string containing the needle
 * @needle: string to look
 * Return: ()
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (b = 0; needle[b] != '\0'; b++)
	{
		for (a = 0; haystack[a] != '\0'; a++)
		{
			if (needle[b] == haystack[a])
				return (haystack + a);
		}
	}
	return ('\0');
}
