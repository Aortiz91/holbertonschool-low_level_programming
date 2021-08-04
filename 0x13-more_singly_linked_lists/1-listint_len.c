#include "lists.h"
/**
 * listint_len - Write a function that returns the number of elements in a
 * linked listint_t list
 * @h: elements of my struct
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
/*		printf("%d\n", h->n);*/
		nodes++;
		h = h->next;
	}
	return (nodes);
}
