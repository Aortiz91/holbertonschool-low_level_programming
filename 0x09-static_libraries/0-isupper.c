#include "holberton.h"
/**
 * _isupper - Entry point
 * @c: integer
 * Description: Will return if C is uppercase character
 * Return: (1) Success
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}
