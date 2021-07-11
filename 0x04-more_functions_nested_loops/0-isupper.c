#include "holberton.h"
/**
 * _isupper - Will return if C is uppercase character
 * @c: integer to evaluate
 * Return: (1) Success
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}
