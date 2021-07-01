#include "holberton.h"
/**
 * _strncat - Another function that concatenates two strings.
 * @dest: destiny string
 * @src: source string
 * @n: number of bytes of the string
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
		int d, s;

	for (d = 0; dest[d] != '\0'; d++)
	;
	for (s = 0; src[s] != '\0' && s <= n; s++)
	{
		*(dest + d) = src[s];
		d++;
	}
	return (dest);
}
