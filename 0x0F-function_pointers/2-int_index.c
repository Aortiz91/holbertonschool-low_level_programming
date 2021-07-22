#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer.
 * @array: array
 * @size: array size
 * @cmp: function pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (!array || !cmp || size < 1)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		return (a);
	}
	return (-1);
}
