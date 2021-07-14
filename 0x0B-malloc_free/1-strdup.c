#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - Write a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: string gto copy
 * Return: str
 */
char *_strdup(char *str)
{
	char *p = NULL;
	int a;
	int len = 0;

	for (len = 0; *(str + len) != '\0'; len++)
	;
	p = malloc(sizeof(char) * len + 1);
	if (p)
	{
		for (a = 0; a < len; a++)
		{
			p[a] = str[a];
		}
		return (p);
	}
	;
	return (NULL);
}
