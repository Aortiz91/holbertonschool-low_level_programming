#include "holberton.h"
/**
 * _islower - Entry Point
 * @c: lalala
 *
 *Return: (1) Success
 */
int _islower(int c)
{
char letter;
	if ((letter > 96) && (letter < 123))
		return (1);
	else
		return (0);
}
