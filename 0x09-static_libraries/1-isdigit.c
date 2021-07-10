#include "holberton.h"
/**
 * _isdigit - Entry point
 * @c: integer
 * Description: Checks for a digit 0-9
 * Return: (1) Success
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	else
		return (0);
}
