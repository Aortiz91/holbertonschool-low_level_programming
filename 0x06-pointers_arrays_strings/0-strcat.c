#include "holberton.h"
/**
 * _strcat - Function that concatenates two strings.
 * @dest: destiny string to concatenate
 * @src: source string to concatenate
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	for (d = 0; dest[d] != '\0'; d++)
	;
	for (s = 0; src[s] != '\0'; s++)
		{
		*(dest + d) = src[s];
		d++;
		}
	return (dest);
}
