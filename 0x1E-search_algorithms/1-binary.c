#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an sorted array of
 * integers using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if the value is not located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right, i;

	if (!array)
		return (-1);
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		if (i == right)
			printf("%d\n", array[i]);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
	}
	return (-1);
}
