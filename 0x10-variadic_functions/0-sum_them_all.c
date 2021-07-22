#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: amount of parameters
 * Return: suma
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, value, suma = 0;
	va_list parameters;

	va_start(parameters, n);
	for (a = 0; a < n; a++)
	{
		{
			if (n == 0)
			return (0);
		}
	value = va_arg(parameters, int);
	suma += value;
	va_end(parameters);
	}
	return (suma);
}
