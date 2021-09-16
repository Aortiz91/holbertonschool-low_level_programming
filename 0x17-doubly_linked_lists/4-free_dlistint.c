#include "lists.h"
/**
 * free_dlistint - Function that frees a dlistint_t list.
 * @head: node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
