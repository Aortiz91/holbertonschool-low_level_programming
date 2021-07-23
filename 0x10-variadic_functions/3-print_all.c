#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Write a function that prints anything
 * @format: format of argument
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *s = ", ";
	char *st;
	va_list parameters;

	va_start(parameters, format);

	if (format)
	while (format[a])
	{
		switch (format[a])
			{
			case 'c':
				printf("%c%s", va_arg(parameters, int), s);
			break;
			case 'i':
				printf("%d%s", va_arg(parameters, int), s);
			break;
			case 'f':
				printf("%f%s", va_arg(parameters, double), s);
			break;
			case 's':
				st = va_arg(parameters, char *);
				if (!st)
				printf("(nil)");
				else
				printf("%s%s", va_arg(parameters, char*), s);
			break;
			default:
			break;
			}
	a++;
	}
	va_end(parameters);
	printf("\n");
}
