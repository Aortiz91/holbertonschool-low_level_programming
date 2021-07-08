#include "holberton.h"
/**
 * is_prime_number - Write a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n:  integer
 * Return: (1)
 */
int is_prime_number(int n)
{
	return (_prime(n, n - 1));
}
/**
 * _prime - Test if a number is prime
 * @n: number to test
 * @m: iterations
 * Return: (1)
 */
int _prime(int n, int m)
{
	if (n % m == 0 && m != 1)
	return (0);
	if (n % m == 0 && m == 1)
	return (1);
	return (_prime(n, m - 1));
}
