#include "holberton.h"
/**
 * *_strcpy - Copies string pointed to by src to
 * buffer pointed to by dest
 * @dest: pointer destination
 * @src: pointer source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
