#include "lists.h"
/**
 * free_list - Write a function that frees a list_t list.
 * @head: head element of the list
 * Description: above
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);/*free next node*/
		free(head);/*safely free head*/
		head = tmp;
	}
}
