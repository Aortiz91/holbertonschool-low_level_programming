#include "lists.h"
/**
 * add_nodeint_end - Write a function that adds a new node at the end of
 * a listint_t list.
 * @head: new node
 * @n: data of my new node
 * Return: Adrres of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *) malloc(sizeof(listint_t));
	listint_t *end = *head;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		(*head) = newnode;
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = newnode;
	}
	return (newnode);
}
