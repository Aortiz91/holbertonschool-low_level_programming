#include "lists.h"
/**
 *list_len - Write a function that returns the number of elements in a
 *linked list_t list.
 *@h: elements of the list
 *Description: above
 *Return:
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

		while (h)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
		nodes++;
		h = h->next;
		}
	return (nodes);
}
