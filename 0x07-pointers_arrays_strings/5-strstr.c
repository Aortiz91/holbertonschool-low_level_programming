#include "holberton.h"
#include <stdio.h>
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
			if (haystack[a] == needle[b])
				return (haystack + a);
		}
	}
	return (NULL);
}
