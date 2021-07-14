#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - Write a function that concatenates two strings.
 * @s1: String 1 to concatenate
 * @s2: String 2 to concatenate
 * Return: (0)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int a = 0, b = 0, c = 0, d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	;
	for (b = 0; s2[b] != '\0'; b++)
	;
	s3 = malloc(sizeof(char) * (a + b + 1));
	if (s3 == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (a + b + 1); c++)
	{
		if (c < a)
			s3[c] = s1[c];
		else
			s3[c] = s2[d++];
	}
	return (s3);
}
