#include "holberton.h"
/**
 * _pow_recursion - Write a function that returns the value
 * of x raised to the power of y.
 * @x: integer X
 * @y: integer Y
 * Return: Value of x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
