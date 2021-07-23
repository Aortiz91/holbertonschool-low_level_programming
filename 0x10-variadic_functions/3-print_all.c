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

	va_end(parameters);
	printf("\n");
}
