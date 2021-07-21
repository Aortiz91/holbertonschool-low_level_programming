#include "function_pointers.h"
/**
 * print_name - Write a function that prints a name.
 * @name: pointer to name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
