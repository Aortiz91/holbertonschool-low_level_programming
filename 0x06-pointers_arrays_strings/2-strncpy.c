#include "holberton.h"
/**
 * _strncpy - function that copies a string.
 * @dest: destiny string
 * @src: source to copy
 * @n : integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for ( ; i < n; a++)
		dest[a] = '\0';
	return (dest);
}
