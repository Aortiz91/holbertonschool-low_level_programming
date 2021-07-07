#include "holberton.h"
/**
 * _sqrt_recursion - Write a function that returns the
 * natural square root of a number.
 * @n: integer
 * Return: (sqrt n)
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
/**
 * _sqrt - newton method
 * @x: integer to calculate sqare root
 * @y: square root value
 * Return: x compared to y
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y * y < x)
		return (_sqrt(x, y + 1));
	return (-1);
}
