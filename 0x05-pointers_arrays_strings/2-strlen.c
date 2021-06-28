#include "holberton.h"
/**
 * _strlen - Entry point.
 * @s: string 
 * Write a function that returns the length of a string.
 */
int _strlen(char *s)
{
	int a;
	a = 0;
	while (s[a] != '\0')
{
	a++;
}
	return (a);
}
