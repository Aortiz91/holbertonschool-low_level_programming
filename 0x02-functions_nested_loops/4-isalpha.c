#include "holberton.h"
/**
 * _isalpha - Entry Point
 * @c: lalala
 *
 *Return: (1) Success
 */
int _isalpha(int c);
{
	if ((c > 65) && (c < 90))
		return (1);
	else
		return (0);
}
