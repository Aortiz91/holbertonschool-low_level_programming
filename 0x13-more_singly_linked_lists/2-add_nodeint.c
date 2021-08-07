#include "lists.h"
/**
 * print_listint - Write a function that adds a new node at the beginning
 * of a listint_t list.
 * @head: new node 
 * @n: data of my new node
 * Return: Adrres of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead = (listint_t *) malloc(sizeof(listint_t));

	if (newhead == NULL)
		return (NULL);
	newhead->n = n;
	newhead->next = (*head);
	(*head) = newhead;
	return (newhead);
}
