#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: pointer to the list
 * @idx: index of the node
 * @n: data of the node
 * Return: Address of the new node, NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_node;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (tmp)
	{
		if (i == idx)
		{
			new_node->next = tmp;
			new_node->prev = tmp->prev;
			tmp->prev = new_node;
			new_node->prev->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}
	if (i < idx)
		return (NULL);
	return (NULL);
}
