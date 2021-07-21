#include "function_pointers.h"
/**
 * array_iterator - Write a function that executes a function given
 * as a parameter on each element of an array.
 * @array: array
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (!array || !action)
		return;
			for (a = 0; a < size; a++)
				action(array[a]);
}
