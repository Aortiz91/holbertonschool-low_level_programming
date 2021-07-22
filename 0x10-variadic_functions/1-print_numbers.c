#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Write a function that prints numbers, followed by
 * a new line.
 * @separator: string between prints
 * @n: amount of parameters
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, value;
	va_list parameters;

	va_start(parameters, n);
	for (a = 0; a < n; a++)
	{
		value = va_arg(parameters, int);
		printf("%d", value);
		{
			if (separator && a != (n - 1))
			printf("%s", separator);
		}
		va_end(parameters);
	}
	printf("\n");
}
