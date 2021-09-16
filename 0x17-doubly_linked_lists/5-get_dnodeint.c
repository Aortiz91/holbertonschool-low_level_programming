#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: position to add node
 * @index: index of the node
 * Return: index node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i < index)
	{
		if (!tmp)
			return (NULL);
		else
			tmp = tmp->next;
			i++;
	}
	return (tmp);
}
