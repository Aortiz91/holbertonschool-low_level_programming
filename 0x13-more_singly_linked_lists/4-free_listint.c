#include "lists.h"
/**
 * free_listint - Write a function that frees a listint_t list.
 * @head: elements of the list.
 */
void free_listint(listint_t *head)
{
	listint_t  *tmp;

	while (head != NULL) /*If head is NULL the list is already empty*/
	{
		tmp = head;
		head = head->next;/*head will now point to the next node*/
		free(tmp);
	}
}
