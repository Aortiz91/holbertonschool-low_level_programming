#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: position to add node
 * @n: node data
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new_node;

	new_node = malloc(sizeof(struct dlistint_t*));
	if (!new_node)
		return NULL;
	tmp = head;
	new_node->data = n;
	new_node->next = head;
	head = new_node;
	
	return (&head);
}
