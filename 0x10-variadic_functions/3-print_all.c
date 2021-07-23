#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Write a function that prints anything
 * @:
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int a;
	char *s;
	va_list parameters;

	va_start(parameters, format);

	while (format[a])
	{
		if (format == c || format == i || format == f || format == s)
			switch (format  [a]
					{
						case 'c':
							printf("%c%s", va_arg(parameters, int), s;
								break;
						case 'i':
							printf("%d%s", va_arg(parameters, int), s:;
								break;
						case 'f':
							printf("%f%s", va_arg(parameters, double), s;
								break;
						case 's':
							printf("%s%s", va_arg(parameters, char), s;
								break;
					}

	}
	a++;


	va_end(parameters);
	printf("\n");
}
