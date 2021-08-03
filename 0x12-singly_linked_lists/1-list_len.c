#include "lists.h"
/**
 * list_len - Write a function that returns the number of elements in a
 * linked list_t list.
 * @h: elements of the list
 * Description: above
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

		while (h)
		{
			nodes++;
			h = h->next;
		}
		return (nodes);
}
