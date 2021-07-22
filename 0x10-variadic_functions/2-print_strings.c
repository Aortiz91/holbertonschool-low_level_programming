#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Write a function that prints strings, followed by
 * a new line.
 * @separator: string between prints
 * @n: amount of parameters
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *s;
	va_list parameters;

	va_start(parameters, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(parameters, char*);
			{
				if (s == NULL)
				printf("(nil)");
				else
				printf("%s", s);
			}
			if (separator && a != (n - 1))
			printf("%s", separator);
	}
	va_end(parameters);
	printf("\n");
}
